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
operation_modes.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
operation_modes.list \

OBJCOPY_BIN += \
operation_modes.bin \


# All Target
all: operation_modes.elf secondary-outputs

# Tool invocations
operation_modes.elf: $(OBJS) $(USER_OBJS) C:\Cortex-Mx\my_workspace\my_project\target\operation_modes\STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "operation_modes.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Cortex-Mx\my_workspace\my_project\target\operation_modes\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="operation_modes.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

operation_modes.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "operation_modes.list"
	@echo 'Finished building: $@'
	@echo ' '

operation_modes.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "operation_modes.bin"
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
