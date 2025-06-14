#ifndef ROTATOR_FUNCTIONS_H
#define ROTATOR_FUNCTIONS_H

void initialize_serial();

void initialize_peripherals();

void read_settings_from_eeprom();

void initialize_pins();

void read_azimuth(byte force_read);

void initialize_display();

void initialize_rotary_encoders();

void initialize_interrupts();

void run_this_once();

void service_process_debug(byte action,byte process_id);

void service_process_debug(byte action,byte process_id);

void check_serial();

void service_request_queue();

void service_rotation();

void az_check_operation_timeout();

void check_buttons();

void check_overlap();

void check_brake_release();

void check_az_speed_pot();

void check_az_speed_pot();

void check_az_preset_potentiometer();

void output_debug();

void check_for_dirty_configuration();

void service_blink_led();

void check_for_reset_flag();

void digitalWriteEnhanced(uint8_t pin, uint8_t writevalue);

int analogReadEnhanced(uint8_t pin);

void update_az_variable_outputs(byte speed_voltage);

int analogReadEnhanced(uint8_t pin);

int digitalReadEnhanced(uint8_t pin);

void submit_request(byte axis, byte request, float parm, byte called_by);

void initialize_eeprom_with_defaults();

void write_settings_to_eeprom();

void analogWriteEnhanced(uint8_t pin, int writevalue);

void change_tracking(byte action);

void stop_rotation();

void pinModeEnhanced(uint8_t pin, uint8_t mode);

void read_headings();

void brake_release(byte az_or_el, byte operation);

void process_yaesu_command(byte * yaesu_command_buffer, int yaesu_command_buffer_index, byte source_port, char * return_string);

byte process_backslash_command(byte input_buffer[], int input_buffer_index, byte source_port, byte include_response_code, char * return_string, byte input_source);

#endif //ROTATOR_FUNCTIONS_H