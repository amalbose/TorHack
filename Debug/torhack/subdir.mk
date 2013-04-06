################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../torhack/client.cpp \
../torhack/main.cpp \
../torhack/router.cpp \
../torhack/system.cpp 

OBJS += \
./torhack/client.o \
./torhack/main.o \
./torhack/router.o \
./torhack/system.o 

CPP_DEPS += \
./torhack/client.d \
./torhack/main.d \
./torhack/router.d \
./torhack/system.d 


# Each subdirectory must supply rules for building sources it contributes
torhack/%.o: ../torhack/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


