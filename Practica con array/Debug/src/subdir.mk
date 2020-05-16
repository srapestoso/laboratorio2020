################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Practica\ con\ array.c \
../src/utn.c 

OBJS += \
./src/Practica\ con\ array.o \
./src/utn.o 

C_DEPS += \
./src/Practica\ con\ array.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/Practica\ con\ array.o: ../src/Practica\ con\ array.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Practica con array.d" -MT"src/Practica\ con\ array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


