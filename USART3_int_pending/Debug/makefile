################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
USART3_int_pending.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
USART3_int_pending.list \

OBJCOPY_BIN += \
USART3_int_pending.bin \


# All Target
all: USART3_int_pending.elf secondary-outputs

# Tool invocations
USART3_int_pending.elf: $(OBJS) $(USER_OBJS) C:\Cortex-Mx\my_workspace\my_project\target\USART3_int_pending\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "USART3_int_pending.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Cortex-Mx\my_workspace\my_project\target\USART3_int_pending\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="USART3_int_pending.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

USART3_int_pending.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "USART3_int_pending.list"
	@echo 'Finished building: $@'
	@echo ' '

USART3_int_pending.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "USART3_int_pending.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
