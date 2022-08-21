//--------------------------------------------------------------------------------
// Auto-generated by LiteX (01754a82) on 2022-08-20 23:50:54
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x0L
#endif

/* MMIO_inst */
#define CSR_MMIO_INST_BASE (CSR_BASE + 0x0L)
#define CSR_MMIO_INST_VELOCITY_0_ADDR (CSR_BASE + 0x0L)
#define CSR_MMIO_INST_VELOCITY_0_SIZE 1
static inline uint32_t MMIO_inst_velocity_0_read(void) {
	return csr_read_simple((CSR_BASE + 0x0L));
}
static inline void MMIO_inst_velocity_0_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x0L));
}
#define CSR_MMIO_INST_VELOCITY_1_ADDR (CSR_BASE + 0x4L)
#define CSR_MMIO_INST_VELOCITY_1_SIZE 1
static inline uint32_t MMIO_inst_velocity_1_read(void) {
	return csr_read_simple((CSR_BASE + 0x4L));
}
static inline void MMIO_inst_velocity_1_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4L));
}
#define CSR_MMIO_INST_VELOCITY_2_ADDR (CSR_BASE + 0x8L)
#define CSR_MMIO_INST_VELOCITY_2_SIZE 1
static inline uint32_t MMIO_inst_velocity_2_read(void) {
	return csr_read_simple((CSR_BASE + 0x8L));
}
static inline void MMIO_inst_velocity_2_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x8L));
}
#define CSR_MMIO_INST_VELOCITY_3_ADDR (CSR_BASE + 0xcL)
#define CSR_MMIO_INST_VELOCITY_3_SIZE 1
static inline uint32_t MMIO_inst_velocity_3_read(void) {
	return csr_read_simple((CSR_BASE + 0xcL));
}
static inline void MMIO_inst_velocity_3_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0xcL));
}
#define CSR_MMIO_INST_VELOCITY_4_ADDR (CSR_BASE + 0x10L)
#define CSR_MMIO_INST_VELOCITY_4_SIZE 1
static inline uint32_t MMIO_inst_velocity_4_read(void) {
	return csr_read_simple((CSR_BASE + 0x10L));
}
static inline void MMIO_inst_velocity_4_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x10L));
}
#define CSR_MMIO_INST_VELOCITY_5_ADDR (CSR_BASE + 0x14L)
#define CSR_MMIO_INST_VELOCITY_5_SIZE 1
static inline uint32_t MMIO_inst_velocity_5_read(void) {
	return csr_read_simple((CSR_BASE + 0x14L));
}
static inline void MMIO_inst_velocity_5_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x14L));
}
#define CSR_MMIO_INST_STEPSIGN_ADDR (CSR_BASE + 0x18L)
#define CSR_MMIO_INST_STEPSIGN_SIZE 1
static inline uint32_t MMIO_inst_stepsign_read(void) {
	return csr_read_simple((CSR_BASE + 0x18L));
}
static inline void MMIO_inst_stepsign_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x18L));
}
#define CSR_MMIO_INST_STEPSIGN_SIGN_OFFSET 0
#define CSR_MMIO_INST_STEPSIGN_SIGN_SIZE 16
static inline uint32_t MMIO_inst_stepsign_sign_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_stepsign_sign_read(void) {
	uint32_t word = MMIO_inst_stepsign_read();
	return MMIO_inst_stepsign_sign_extract(word);
}
static inline uint32_t MMIO_inst_stepsign_sign_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_stepsign_sign_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_stepsign_read();
	uint32_t newword = MMIO_inst_stepsign_sign_replace(oldword, plain_value);
	MMIO_inst_stepsign_write(newword);
}
#define CSR_MMIO_INST_STEP_RES_EN_ADDR (CSR_BASE + 0x1cL)
#define CSR_MMIO_INST_STEP_RES_EN_SIZE 1
static inline uint32_t MMIO_inst_step_res_en_read(void) {
	return csr_read_simple((CSR_BASE + 0x1cL));
}
static inline void MMIO_inst_step_res_en_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1cL));
}
#define CSR_MMIO_INST_STEP_RES_EN_SGRESET_OFFSET 0
#define CSR_MMIO_INST_STEP_RES_EN_SGRESET_SIZE 16
static inline uint32_t MMIO_inst_step_res_en_sgreset_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_step_res_en_sgreset_read(void) {
	uint32_t word = MMIO_inst_step_res_en_read();
	return MMIO_inst_step_res_en_sgreset_extract(word);
}
static inline uint32_t MMIO_inst_step_res_en_sgreset_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_step_res_en_sgreset_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_step_res_en_read();
	uint32_t newword = MMIO_inst_step_res_en_sgreset_replace(oldword, plain_value);
	MMIO_inst_step_res_en_write(newword);
}
#define CSR_MMIO_INST_STEP_RES_EN_SGENABLE_OFFSET 16
#define CSR_MMIO_INST_STEP_RES_EN_SGENABLE_SIZE 16
static inline uint32_t MMIO_inst_step_res_en_sgenable_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 16) & mask );
}
static inline uint32_t MMIO_inst_step_res_en_sgenable_read(void) {
	uint32_t word = MMIO_inst_step_res_en_read();
	return MMIO_inst_step_res_en_sgenable_extract(word);
}
static inline uint32_t MMIO_inst_step_res_en_sgenable_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 16))) | (mask & plain_value)<< 16 ;
}
static inline void MMIO_inst_step_res_en_sgenable_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_step_res_en_read();
	uint32_t newword = MMIO_inst_step_res_en_sgenable_replace(oldword, plain_value);
	MMIO_inst_step_res_en_write(newword);
}
#define CSR_MMIO_INST_STEPDIRINV_ADDR (CSR_BASE + 0x20L)
#define CSR_MMIO_INST_STEPDIRINV_SIZE 1
static inline uint32_t MMIO_inst_stepdirinv_read(void) {
	return csr_read_simple((CSR_BASE + 0x20L));
}
static inline void MMIO_inst_stepdirinv_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x20L));
}
#define CSR_MMIO_INST_STEPDIRINV_DIR_INV_OFFSET 0
#define CSR_MMIO_INST_STEPDIRINV_DIR_INV_SIZE 16
static inline uint32_t MMIO_inst_stepdirinv_dir_inv_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_stepdirinv_dir_inv_read(void) {
	uint32_t word = MMIO_inst_stepdirinv_read();
	return MMIO_inst_stepdirinv_dir_inv_extract(word);
}
static inline uint32_t MMIO_inst_stepdirinv_dir_inv_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_stepdirinv_dir_inv_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_stepdirinv_read();
	uint32_t newword = MMIO_inst_stepdirinv_dir_inv_replace(oldword, plain_value);
	MMIO_inst_stepdirinv_write(newword);
}
#define CSR_MMIO_INST_STEPDIRINV_STEP_INV_OFFSET 16
#define CSR_MMIO_INST_STEPDIRINV_STEP_INV_SIZE 16
static inline uint32_t MMIO_inst_stepdirinv_step_inv_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 16) & mask );
}
static inline uint32_t MMIO_inst_stepdirinv_step_inv_read(void) {
	uint32_t word = MMIO_inst_stepdirinv_read();
	return MMIO_inst_stepdirinv_step_inv_extract(word);
}
static inline uint32_t MMIO_inst_stepdirinv_step_inv_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 16))) | (mask & plain_value)<< 16 ;
}
static inline void MMIO_inst_stepdirinv_step_inv_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_stepdirinv_read();
	uint32_t newword = MMIO_inst_stepdirinv_step_inv_replace(oldword, plain_value);
	MMIO_inst_stepdirinv_write(newword);
}
#define CSR_MMIO_INST_STEPTIMES_ADDR (CSR_BASE + 0x24L)
#define CSR_MMIO_INST_STEPTIMES_SIZE 1
static inline uint32_t MMIO_inst_steptimes_read(void) {
	return csr_read_simple((CSR_BASE + 0x24L));
}
static inline void MMIO_inst_steptimes_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x24L));
}
#define CSR_MMIO_INST_STEPTIMES_DIR_SETUP_OFFSET 0
#define CSR_MMIO_INST_STEPTIMES_DIR_SETUP_SIZE 14
static inline uint32_t MMIO_inst_steptimes_dir_setup_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 14)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_steptimes_dir_setup_read(void) {
	uint32_t word = MMIO_inst_steptimes_read();
	return MMIO_inst_steptimes_dir_setup_extract(word);
}
static inline uint32_t MMIO_inst_steptimes_dir_setup_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 14)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_steptimes_dir_setup_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_steptimes_read();
	uint32_t newword = MMIO_inst_steptimes_dir_setup_replace(oldword, plain_value);
	MMIO_inst_steptimes_write(newword);
}
#define CSR_MMIO_INST_STEPTIMES_DIR_WIDTH_OFFSET 14
#define CSR_MMIO_INST_STEPTIMES_DIR_WIDTH_SIZE 9
static inline uint32_t MMIO_inst_steptimes_dir_width_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 9)-1);
	return ( (oldword >> 14) & mask );
}
static inline uint32_t MMIO_inst_steptimes_dir_width_read(void) {
	uint32_t word = MMIO_inst_steptimes_read();
	return MMIO_inst_steptimes_dir_width_extract(word);
}
static inline uint32_t MMIO_inst_steptimes_dir_width_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 9)-1);
	return (oldword & (~(mask << 14))) | (mask & plain_value)<< 14 ;
}
static inline void MMIO_inst_steptimes_dir_width_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_steptimes_read();
	uint32_t newword = MMIO_inst_steptimes_dir_width_replace(oldword, plain_value);
	MMIO_inst_steptimes_write(newword);
}
#define CSR_MMIO_INST_STEPTIMES_STEP_WIDTH_OFFSET 23
#define CSR_MMIO_INST_STEPTIMES_STEP_WIDTH_SIZE 9
static inline uint32_t MMIO_inst_steptimes_step_width_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 9)-1);
	return ( (oldword >> 23) & mask );
}
static inline uint32_t MMIO_inst_steptimes_step_width_read(void) {
	uint32_t word = MMIO_inst_steptimes_read();
	return MMIO_inst_steptimes_step_width_extract(word);
}
static inline uint32_t MMIO_inst_steptimes_step_width_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 9)-1);
	return (oldword & (~(mask << 23))) | (mask & plain_value)<< 23 ;
}
static inline void MMIO_inst_steptimes_step_width_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_steptimes_read();
	uint32_t newword = MMIO_inst_steptimes_step_width_replace(oldword, plain_value);
	MMIO_inst_steptimes_write(newword);
}
#define CSR_MMIO_INST_GPIOS_OUT_ADDR (CSR_BASE + 0x28L)
#define CSR_MMIO_INST_GPIOS_OUT_SIZE 1
static inline uint32_t MMIO_inst_gpios_out_read(void) {
	return csr_read_simple((CSR_BASE + 0x28L));
}
static inline void MMIO_inst_gpios_out_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x28L));
}
#define CSR_MMIO_INST_PWM_0_ADDR (CSR_BASE + 0x2cL)
#define CSR_MMIO_INST_PWM_0_SIZE 1
static inline uint32_t MMIO_inst_pwm_0_read(void) {
	return csr_read_simple((CSR_BASE + 0x2cL));
}
static inline void MMIO_inst_pwm_0_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2cL));
}
#define CSR_MMIO_INST_PWM_0_WIDTH_OFFSET 0
#define CSR_MMIO_INST_PWM_0_WIDTH_SIZE 16
static inline uint32_t MMIO_inst_pwm_0_width_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_pwm_0_width_read(void) {
	uint32_t word = MMIO_inst_pwm_0_read();
	return MMIO_inst_pwm_0_width_extract(word);
}
static inline uint32_t MMIO_inst_pwm_0_width_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_pwm_0_width_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_pwm_0_read();
	uint32_t newword = MMIO_inst_pwm_0_width_replace(oldword, plain_value);
	MMIO_inst_pwm_0_write(newword);
}
#define CSR_MMIO_INST_PWM_0_PERIOD_OFFSET 16
#define CSR_MMIO_INST_PWM_0_PERIOD_SIZE 16
static inline uint32_t MMIO_inst_pwm_0_period_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 16) & mask );
}
static inline uint32_t MMIO_inst_pwm_0_period_read(void) {
	uint32_t word = MMIO_inst_pwm_0_read();
	return MMIO_inst_pwm_0_period_extract(word);
}
static inline uint32_t MMIO_inst_pwm_0_period_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 16))) | (mask & plain_value)<< 16 ;
}
static inline void MMIO_inst_pwm_0_period_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_pwm_0_read();
	uint32_t newword = MMIO_inst_pwm_0_period_replace(oldword, plain_value);
	MMIO_inst_pwm_0_write(newword);
}
#define CSR_MMIO_INST_PWM_1_ADDR (CSR_BASE + 0x30L)
#define CSR_MMIO_INST_PWM_1_SIZE 1
static inline uint32_t MMIO_inst_pwm_1_read(void) {
	return csr_read_simple((CSR_BASE + 0x30L));
}
static inline void MMIO_inst_pwm_1_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x30L));
}
#define CSR_MMIO_INST_PWM_1_WIDTH_OFFSET 0
#define CSR_MMIO_INST_PWM_1_WIDTH_SIZE 16
static inline uint32_t MMIO_inst_pwm_1_width_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_pwm_1_width_read(void) {
	uint32_t word = MMIO_inst_pwm_1_read();
	return MMIO_inst_pwm_1_width_extract(word);
}
static inline uint32_t MMIO_inst_pwm_1_width_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_pwm_1_width_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_pwm_1_read();
	uint32_t newword = MMIO_inst_pwm_1_width_replace(oldword, plain_value);
	MMIO_inst_pwm_1_write(newword);
}
#define CSR_MMIO_INST_PWM_1_PERIOD_OFFSET 16
#define CSR_MMIO_INST_PWM_1_PERIOD_SIZE 16
static inline uint32_t MMIO_inst_pwm_1_period_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 16) & mask );
}
static inline uint32_t MMIO_inst_pwm_1_period_read(void) {
	uint32_t word = MMIO_inst_pwm_1_read();
	return MMIO_inst_pwm_1_period_extract(word);
}
static inline uint32_t MMIO_inst_pwm_1_period_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 16))) | (mask & plain_value)<< 16 ;
}
static inline void MMIO_inst_pwm_1_period_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_pwm_1_read();
	uint32_t newword = MMIO_inst_pwm_1_period_replace(oldword, plain_value);
	MMIO_inst_pwm_1_write(newword);
}
#define CSR_MMIO_INST_PWM_2_ADDR (CSR_BASE + 0x34L)
#define CSR_MMIO_INST_PWM_2_SIZE 1
static inline uint32_t MMIO_inst_pwm_2_read(void) {
	return csr_read_simple((CSR_BASE + 0x34L));
}
static inline void MMIO_inst_pwm_2_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x34L));
}
#define CSR_MMIO_INST_PWM_2_WIDTH_OFFSET 0
#define CSR_MMIO_INST_PWM_2_WIDTH_SIZE 16
static inline uint32_t MMIO_inst_pwm_2_width_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_pwm_2_width_read(void) {
	uint32_t word = MMIO_inst_pwm_2_read();
	return MMIO_inst_pwm_2_width_extract(word);
}
static inline uint32_t MMIO_inst_pwm_2_width_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_pwm_2_width_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_pwm_2_read();
	uint32_t newword = MMIO_inst_pwm_2_width_replace(oldword, plain_value);
	MMIO_inst_pwm_2_write(newword);
}
#define CSR_MMIO_INST_PWM_2_PERIOD_OFFSET 16
#define CSR_MMIO_INST_PWM_2_PERIOD_SIZE 16
static inline uint32_t MMIO_inst_pwm_2_period_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 16) & mask );
}
static inline uint32_t MMIO_inst_pwm_2_period_read(void) {
	uint32_t word = MMIO_inst_pwm_2_read();
	return MMIO_inst_pwm_2_period_extract(word);
}
static inline uint32_t MMIO_inst_pwm_2_period_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 16))) | (mask & plain_value)<< 16 ;
}
static inline void MMIO_inst_pwm_2_period_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_pwm_2_read();
	uint32_t newword = MMIO_inst_pwm_2_period_replace(oldword, plain_value);
	MMIO_inst_pwm_2_write(newword);
}
#define CSR_MMIO_INST_ENC_RES_EN_ADDR (CSR_BASE + 0x38L)
#define CSR_MMIO_INST_ENC_RES_EN_SIZE 1
static inline uint32_t MMIO_inst_enc_res_en_read(void) {
	return csr_read_simple((CSR_BASE + 0x38L));
}
static inline void MMIO_inst_enc_res_en_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x38L));
}
#define CSR_MMIO_INST_ENC_RES_EN_RESET_OFFSET 0
#define CSR_MMIO_INST_ENC_RES_EN_RESET_SIZE 16
static inline uint32_t MMIO_inst_enc_res_en_reset_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t MMIO_inst_enc_res_en_reset_read(void) {
	uint32_t word = MMIO_inst_enc_res_en_read();
	return MMIO_inst_enc_res_en_reset_extract(word);
}
static inline uint32_t MMIO_inst_enc_res_en_reset_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void MMIO_inst_enc_res_en_reset_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_enc_res_en_read();
	uint32_t newword = MMIO_inst_enc_res_en_reset_replace(oldword, plain_value);
	MMIO_inst_enc_res_en_write(newword);
}
#define CSR_MMIO_INST_ENC_RES_EN_ENABLE_OFFSET 16
#define CSR_MMIO_INST_ENC_RES_EN_ENABLE_SIZE 16
static inline uint32_t MMIO_inst_enc_res_en_enable_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return ( (oldword >> 16) & mask );
}
static inline uint32_t MMIO_inst_enc_res_en_enable_read(void) {
	uint32_t word = MMIO_inst_enc_res_en_read();
	return MMIO_inst_enc_res_en_enable_extract(word);
}
static inline uint32_t MMIO_inst_enc_res_en_enable_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 16)-1);
	return (oldword & (~(mask << 16))) | (mask & plain_value)<< 16 ;
}
static inline void MMIO_inst_enc_res_en_enable_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_enc_res_en_read();
	uint32_t newword = MMIO_inst_enc_res_en_enable_replace(oldword, plain_value);
	MMIO_inst_enc_res_en_write(newword);
}
#define CSR_MMIO_INST_RES_ST_REG_ADDR (CSR_BASE + 0x3cL)
#define CSR_MMIO_INST_RES_ST_REG_SIZE 1
static inline uint32_t MMIO_inst_res_st_reg_read(void) {
	return csr_read_simple((CSR_BASE + 0x3cL));
}
static inline void MMIO_inst_res_st_reg_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x3cL));
}
#define CSR_MMIO_INST_RES_ST_REG_WATCHDOG_OFFSET 10
#define CSR_MMIO_INST_RES_ST_REG_WATCHDOG_SIZE 22
static inline uint32_t MMIO_inst_res_st_reg_watchdog_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 22)-1);
	return ( (oldword >> 10) & mask );
}
static inline uint32_t MMIO_inst_res_st_reg_watchdog_read(void) {
	uint32_t word = MMIO_inst_res_st_reg_read();
	return MMIO_inst_res_st_reg_watchdog_extract(word);
}
static inline uint32_t MMIO_inst_res_st_reg_watchdog_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 22)-1);
	return (oldword & (~(mask << 10))) | (mask & plain_value)<< 10 ;
}
static inline void MMIO_inst_res_st_reg_watchdog_write(uint32_t plain_value) {
	uint32_t oldword = MMIO_inst_res_st_reg_read();
	uint32_t newword = MMIO_inst_res_st_reg_watchdog_replace(oldword, plain_value);
	MMIO_inst_res_st_reg_write(newword);
}
#define CSR_MMIO_INST_SG_COUNT_0_ADDR (CSR_BASE + 0x40L)
#define CSR_MMIO_INST_SG_COUNT_0_SIZE 1
static inline uint32_t MMIO_inst_sg_count_0_read(void) {
	return csr_read_simple((CSR_BASE + 0x40L));
}
#define CSR_MMIO_INST_SG_COUNT_1_ADDR (CSR_BASE + 0x44L)
#define CSR_MMIO_INST_SG_COUNT_1_SIZE 1
static inline uint32_t MMIO_inst_sg_count_1_read(void) {
	return csr_read_simple((CSR_BASE + 0x44L));
}
#define CSR_MMIO_INST_SG_COUNT_2_ADDR (CSR_BASE + 0x48L)
#define CSR_MMIO_INST_SG_COUNT_2_SIZE 1
static inline uint32_t MMIO_inst_sg_count_2_read(void) {
	return csr_read_simple((CSR_BASE + 0x48L));
}
#define CSR_MMIO_INST_SG_COUNT_3_ADDR (CSR_BASE + 0x4cL)
#define CSR_MMIO_INST_SG_COUNT_3_SIZE 1
static inline uint32_t MMIO_inst_sg_count_3_read(void) {
	return csr_read_simple((CSR_BASE + 0x4cL));
}
#define CSR_MMIO_INST_SG_COUNT_4_ADDR (CSR_BASE + 0x50L)
#define CSR_MMIO_INST_SG_COUNT_4_SIZE 1
static inline uint32_t MMIO_inst_sg_count_4_read(void) {
	return csr_read_simple((CSR_BASE + 0x50L));
}
#define CSR_MMIO_INST_SG_COUNT_5_ADDR (CSR_BASE + 0x54L)
#define CSR_MMIO_INST_SG_COUNT_5_SIZE 1
static inline uint32_t MMIO_inst_sg_count_5_read(void) {
	return csr_read_simple((CSR_BASE + 0x54L));
}
#define CSR_MMIO_INST_WALLCLOCK_ADDR (CSR_BASE + 0x58L)
#define CSR_MMIO_INST_WALLCLOCK_SIZE 1
static inline uint32_t MMIO_inst_wallclock_read(void) {
	return csr_read_simple((CSR_BASE + 0x58L));
}
#define CSR_MMIO_INST_GPIOS_IN_ADDR (CSR_BASE + 0x5cL)
#define CSR_MMIO_INST_GPIOS_IN_SIZE 1
static inline uint32_t MMIO_inst_gpios_in_read(void) {
	return csr_read_simple((CSR_BASE + 0x5cL));
}
#define CSR_MMIO_INST_ENC_COUNT_0_ADDR (CSR_BASE + 0x60L)
#define CSR_MMIO_INST_ENC_COUNT_0_SIZE 1
static inline uint32_t MMIO_inst_enc_count_0_read(void) {
	return csr_read_simple((CSR_BASE + 0x60L));
}
#define CSR_MMIO_INST_ENC_COUNT_1_ADDR (CSR_BASE + 0x64L)
#define CSR_MMIO_INST_ENC_COUNT_1_SIZE 1
static inline uint32_t MMIO_inst_enc_count_1_read(void) {
	return csr_read_simple((CSR_BASE + 0x64L));
}
#define CSR_MMIO_INST_ENC_COUNT_2_ADDR (CSR_BASE + 0x68L)
#define CSR_MMIO_INST_ENC_COUNT_2_SIZE 1
static inline uint32_t MMIO_inst_enc_count_2_read(void) {
	return csr_read_simple((CSR_BASE + 0x68L));
}
#define CSR_MMIO_INST_ENC_COUNT_3_ADDR (CSR_BASE + 0x6cL)
#define CSR_MMIO_INST_ENC_COUNT_3_SIZE 1
static inline uint32_t MMIO_inst_enc_count_3_read(void) {
	return csr_read_simple((CSR_BASE + 0x6cL));
}
#define CSR_MMIO_INST_ENC_COUNT_4_ADDR (CSR_BASE + 0x70L)
#define CSR_MMIO_INST_ENC_COUNT_4_SIZE 1
static inline uint32_t MMIO_inst_enc_count_4_read(void) {
	return csr_read_simple((CSR_BASE + 0x70L));
}
#define CSR_MMIO_INST_ENC_COUNT_5_ADDR (CSR_BASE + 0x74L)
#define CSR_MMIO_INST_ENC_COUNT_5_SIZE 1
static inline uint32_t MMIO_inst_enc_count_5_read(void) {
	return csr_read_simple((CSR_BASE + 0x74L));
}

/* ctrl */
#define CSR_CTRL_BASE (CSR_BASE + 0x800L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x800L)
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x800L));
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x800L));
}
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
static inline uint32_t ctrl_reset_soc_rst_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t ctrl_reset_soc_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_soc_rst_extract(word);
}
static inline uint32_t ctrl_reset_soc_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void ctrl_reset_soc_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_soc_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1
static inline uint32_t ctrl_reset_cpu_rst_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t ctrl_reset_cpu_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_cpu_rst_extract(word);
}
static inline uint32_t ctrl_reset_cpu_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void ctrl_reset_cpu_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_cpu_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x804L)
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple((CSR_BASE + 0x804L));
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x804L));
}
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x808L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple((CSR_BASE + 0x808L));
}

/* ethphy */
#define CSR_ETHPHY_BASE (CSR_BASE + 0x1000L)
#define CSR_ETHPHY_CRG_RESET_ADDR (CSR_BASE + 0x1000L)
#define CSR_ETHPHY_CRG_RESET_SIZE 1
static inline uint32_t ethphy_crg_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x1000L));
}
static inline void ethphy_crg_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1000L));
}
#define CSR_ETHPHY_RX_INBAND_STATUS_ADDR (CSR_BASE + 0x1004L)
#define CSR_ETHPHY_RX_INBAND_STATUS_SIZE 1
static inline uint32_t ethphy_rx_inband_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x1004L));
}
#define CSR_ETHPHY_RX_INBAND_STATUS_LINK_STATUS_OFFSET 0
#define CSR_ETHPHY_RX_INBAND_STATUS_LINK_STATUS_SIZE 1
static inline uint32_t ethphy_rx_inband_status_link_status_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t ethphy_rx_inband_status_link_status_read(void) {
	uint32_t word = ethphy_rx_inband_status_read();
	return ethphy_rx_inband_status_link_status_extract(word);
}
#define CSR_ETHPHY_RX_INBAND_STATUS_CLOCK_SPEED_OFFSET 1
#define CSR_ETHPHY_RX_INBAND_STATUS_CLOCK_SPEED_SIZE 1
static inline uint32_t ethphy_rx_inband_status_clock_speed_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t ethphy_rx_inband_status_clock_speed_read(void) {
	uint32_t word = ethphy_rx_inband_status_read();
	return ethphy_rx_inband_status_clock_speed_extract(word);
}
#define CSR_ETHPHY_RX_INBAND_STATUS_DUPLEX_STATUS_OFFSET 2
#define CSR_ETHPHY_RX_INBAND_STATUS_DUPLEX_STATUS_SIZE 1
static inline uint32_t ethphy_rx_inband_status_duplex_status_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 2) & mask );
}
static inline uint32_t ethphy_rx_inband_status_duplex_status_read(void) {
	uint32_t word = ethphy_rx_inband_status_read();
	return ethphy_rx_inband_status_duplex_status_extract(word);
}
#define CSR_ETHPHY_MDIO_W_ADDR (CSR_BASE + 0x1008L)
#define CSR_ETHPHY_MDIO_W_SIZE 1
static inline uint32_t ethphy_mdio_w_read(void) {
	return csr_read_simple((CSR_BASE + 0x1008L));
}
static inline void ethphy_mdio_w_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1008L));
}
#define CSR_ETHPHY_MDIO_W_MDC_OFFSET 0
#define CSR_ETHPHY_MDIO_W_MDC_SIZE 1
static inline uint32_t ethphy_mdio_w_mdc_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t ethphy_mdio_w_mdc_read(void) {
	uint32_t word = ethphy_mdio_w_read();
	return ethphy_mdio_w_mdc_extract(word);
}
static inline uint32_t ethphy_mdio_w_mdc_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void ethphy_mdio_w_mdc_write(uint32_t plain_value) {
	uint32_t oldword = ethphy_mdio_w_read();
	uint32_t newword = ethphy_mdio_w_mdc_replace(oldword, plain_value);
	ethphy_mdio_w_write(newword);
}
#define CSR_ETHPHY_MDIO_W_OE_OFFSET 1
#define CSR_ETHPHY_MDIO_W_OE_SIZE 1
static inline uint32_t ethphy_mdio_w_oe_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t ethphy_mdio_w_oe_read(void) {
	uint32_t word = ethphy_mdio_w_read();
	return ethphy_mdio_w_oe_extract(word);
}
static inline uint32_t ethphy_mdio_w_oe_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void ethphy_mdio_w_oe_write(uint32_t plain_value) {
	uint32_t oldword = ethphy_mdio_w_read();
	uint32_t newword = ethphy_mdio_w_oe_replace(oldword, plain_value);
	ethphy_mdio_w_write(newword);
}
#define CSR_ETHPHY_MDIO_W_W_OFFSET 2
#define CSR_ETHPHY_MDIO_W_W_SIZE 1
static inline uint32_t ethphy_mdio_w_w_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 2) & mask );
}
static inline uint32_t ethphy_mdio_w_w_read(void) {
	uint32_t word = ethphy_mdio_w_read();
	return ethphy_mdio_w_w_extract(word);
}
static inline uint32_t ethphy_mdio_w_w_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 2))) | (mask & plain_value)<< 2 ;
}
static inline void ethphy_mdio_w_w_write(uint32_t plain_value) {
	uint32_t oldword = ethphy_mdio_w_read();
	uint32_t newword = ethphy_mdio_w_w_replace(oldword, plain_value);
	ethphy_mdio_w_write(newword);
}
#define CSR_ETHPHY_MDIO_R_ADDR (CSR_BASE + 0x100cL)
#define CSR_ETHPHY_MDIO_R_SIZE 1
static inline uint32_t ethphy_mdio_r_read(void) {
	return csr_read_simple((CSR_BASE + 0x100cL));
}
#define CSR_ETHPHY_MDIO_R_R_OFFSET 0
#define CSR_ETHPHY_MDIO_R_R_SIZE 1
static inline uint32_t ethphy_mdio_r_r_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t ethphy_mdio_r_r_read(void) {
	uint32_t word = ethphy_mdio_r_read();
	return ethphy_mdio_r_r_extract(word);
}

/* identifier_mem */
#define CSR_IDENTIFIER_MEM_BASE (CSR_BASE + 0x1800L)

#endif