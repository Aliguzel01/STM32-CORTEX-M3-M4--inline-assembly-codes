
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
#include<stdio.h>
#include<stdint.h>
int main(void)
{
	__asm("SVC #25");
	//register uint32_t data __asm("r0");
	uint32_t data;
	__asm volatile("MOV %0,R0": "=r"(data) ::);
	printf("data=%ld\n",data);
	for(;;);
}
__attribute__ ((naked)) void SVC_Handler(void)
{
	// 1. MSP'nin değerini öğrenin
	__asm("MRS R0,MSP");   //MSP degerini almalıyız bu yüzden çıplak işlev kullanarak r0 degerini pBaseofstackframe isaretrçisine kaydettik.ordan _c c fonksiyonuna geç
	//iş yaptık işaretçinin 6 dizesindeki pc kayıtına ulaştık
	__asm("B SVC_Handler_c");
}
void SVC_Handler_c(uint32_t *pBaseOfStackFrame)
{
	printf("in svc handler\n");
	uint8_t *pReturn_addr=(uint8_t*)pBaseOfStackFrame[6];
	// 2. İade adresini işaret etmek için 2 azaltın
	// program belleğindeki SVC komutunun opcode'u
	pReturn_addr-=2;
	// 3. SVC numarasını çıkarın (işlem kodunun LSByte'ı)
	uint8_t svc_number=*pReturn_addr;
	printf("svc number is: %d\n",svc_number);
	svc_number+=4;
	pBaseOfStackFrame[0]=svc_number;
}
