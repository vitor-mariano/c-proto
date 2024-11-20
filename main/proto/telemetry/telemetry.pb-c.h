/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: telemetry/telemetry.proto */

#ifndef PROTOBUF_C_telemetry_2ftelemetry_2eproto__INCLUDED
#define PROTOBUF_C_telemetry_2ftelemetry_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Telemetry__SemVer Telemetry__SemVer;
typedef struct _Telemetry__Record Telemetry__Record;
typedef struct _Telemetry__TelemetryPack Telemetry__TelemetryPack;


/* --- enums --- */

typedef enum _Telemetry__Resource {
  TELEMETRY__RESOURCE__RESOURCE_UNSPECIFIED = 0,
  /*
   * Cel
   */
  TELEMETRY__RESOURCE__RESOURCE_TEMPERATURE = 1,
  /*
   * %RH
   */
  TELEMETRY__RESOURCE__RESOURCE_HUMIDITY = 2,
  /*
   * Lat
   */
  TELEMETRY__RESOURCE__RESOURCE_LATITUDE = 3,
  /*
   * Lon
   */
  TELEMETRY__RESOURCE__RESOURCE_LONGITUDE = 4,
  /*
   * m
   */
  TELEMETRY__RESOURCE__RESOURCE_ALTITUDE = 5,
  /*
   * W
   */
  TELEMETRY__RESOURCE__RESOURCE_POWER = 6,
  /*
   * Pa
   */
  TELEMETRY__RESOURCE__RESOURCE_PRESSURE = 7,
  /*
   * rad
   */
  TELEMETRY__RESOURCE__RESOURCE_ANGLE = 8,
  /*
   * m
   */
  TELEMETRY__RESOURCE__RESOURCE_LENGTH = 9,
  /*
   * m
   */
  TELEMETRY__RESOURCE__RESOURCE_BREADTH = 10,
  /*
   * m
   */
  TELEMETRY__RESOURCE__RESOURCE_HEIGHT = 11,
  /*
   * kg
   */
  TELEMETRY__RESOURCE__RESOURCE_WEIGHT = 12,
  /*
   * m
   */
  TELEMETRY__RESOURCE__RESOURCE_THICKNESS = 13,
  /*
   * m
   */
  TELEMETRY__RESOURCE__RESOURCE_DISTANCE = 14,
  /*
   * m2
   */
  TELEMETRY__RESOURCE__RESOURCE_AREA = 15,
  /*
   * m3
   */
  TELEMETRY__RESOURCE__RESOURCE_VOLUME = 16,
  /*
   * m/s
   */
  TELEMETRY__RESOURCE__RESOURCE_VELOCITY = 17,
  /*
   * A
   */
  TELEMETRY__RESOURCE__RESOURCE_ELECTRIC_CURRENT = 18,
  /*
   * V
   */
  TELEMETRY__RESOURCE__RESOURCE_ELECTRIC_POTENTIAL = 19,
  /*
   * Ohm
   */
  TELEMETRY__RESOURCE__RESOURCE_ELECTRIC_RESISTANCE = 20,
  /*
   * lx
   */
  TELEMETRY__RESOURCE__RESOURCE_ILLUMINANCE = 21,
  /*
   * m/s2
   */
  TELEMETRY__RESOURCE__RESOURCE_ACCELERATION_X = 22,
  /*
   * m/s2
   */
  TELEMETRY__RESOURCE__RESOURCE_ACCELERATION_Y = 23,
  /*
   * m/s2
   */
  TELEMETRY__RESOURCE__RESOURCE_ACCELERATION_Z = 24,
  /*
   * rad
   */
  TELEMETRY__RESOURCE__RESOURCE_HEADING = 25,
  /*
   * ppm
   */
  TELEMETRY__RESOURCE__RESOURCE_CO_CONCENTRATION = 26,
  /*
   * ppm
   */
  TELEMETRY__RESOURCE__RESOURCE_CO2_CONCENTRATION = 27,
  /*
   * dB
   */
  TELEMETRY__RESOURCE__RESOURCE_SOUND = 28,
  /*
   * Hz
   */
  TELEMETRY__RESOURCE__RESOURCE_FREQUENCY = 29,
  /*
   * %EL
   */
  TELEMETRY__RESOURCE__RESOURCE_BATTERY_LEVEL = 30,
  /*
   * V
   */
  TELEMETRY__RESOURCE__RESOURCE_BATTERY_VOLTAGE = 31,
  /*
   * m
   */
  TELEMETRY__RESOURCE__RESOURCE_RADIUS = 32,
  /*
   * Ratio (/)
   */
  TELEMETRY__RESOURCE__RESOURCE_BATTERY_LEVEL_LOW = 33,
  /*
   * T
   */
  TELEMETRY__RESOURCE__RESOURCE_COMPASS_X = 34,
  /*
   * T
   */
  TELEMETRY__RESOURCE__RESOURCE_COMPASS_Y = 35,
  /*
   * T
   */
  TELEMETRY__RESOURCE__RESOURCE_COMPASS_Z = 36,
  /*
   * Ratio (/)
   */
  TELEMETRY__RESOURCE__RESOURCE_READ_SWITCH = 37,
  TELEMETRY__RESOURCE__RESOURCE_PRESENCE = 38,
  TELEMETRY__RESOURCE__RESOURCE_COUNTER = 39,
  /*
   * Celsius
   */
  TELEMETRY__RESOURCE__RESOURCE_INTERNAL_TEMPERATURE = 40,
  TELEMETRY__RESOURCE__RESOURCE_MOISTURE = 41,
  /*
   * VA
   */
  TELEMETRY__RESOURCE__RESOURCE_APPARENT_POWER = 42,
  /*
   * J
   */
  TELEMETRY__RESOURCE__RESOURCE_ACCUMULATED_POWER = 43,
  /*
   * VAR
   */
  TELEMETRY__RESOURCE__RESOURCE_REACTIVE_POWER = 44,
  /*
   * Ratio (/)
   */
  TELEMETRY__RESOURCE__RESOURCE_POWER_FACTOR = 45,
  TELEMETRY__RESOURCE__RESOURCE_LOG = 46,
  /*
   * B
   */
  TELEMETRY__RESOURCE__RESOURCE_FREE_HEAP_SIZE = 47,
  /*
   * lumen
   */
  TELEMETRY__RESOURCE__RESOURCE_LUMINOUS_FLUX = 48,
  /*
   * candela
   */
  TELEMETRY__RESOURCE__RESOURCE_LUMINOUS_INTENSITY = 49,
  /*
   * Ratio (/)
   */
  TELEMETRY__RESOURCE__RESOURCE_BRIGHTESS = 50,
  /*
   * Ratio (/)
   */
  TELEMETRY__RESOURCE__RESOURCE_BRIGHTENING = 50,
  TELEMETRY__RESOURCE__RESOURCE_SWITCH = 51,
  TELEMETRY__RESOURCE__RESOURCE_CONFIG = 52,
  /*
   * W/m2
   */
  TELEMETRY__RESOURCE__RESOURCE_IRRADIANCE = 53,
  TELEMETRY__RESOURCE__RESOURCE_FIRMWARE_VERSION = 54,
  TELEMETRY__RESOURCE__RESOURCE_HARDWARE_VERSION = 55,
  TELEMETRY__RESOURCE__RESOURCE_HARDWARE_ID = 56,
  TELEMETRY__RESOURCE__RESOURCE_MANUFACTURING_DATE = 57,
  TELEMETRY__RESOURCE__RESOURCE_DEVICE_NAME = 58,
  TELEMETRY__RESOURCE__RESOURCE_CONNECTED_NETWORK = 59,
  TELEMETRY__RESOURCE__RESOURCE_CONNECTED = 60,
  /*
   * ppm
   */
  TELEMETRY__RESOURCE__RESOURCE_N_CONCENTRATION = 61,
  /*
   * ppm
   */
  TELEMETRY__RESOURCE__RESOURCE_P_CONCENTRATION = 62,
  /*
   * ppm
   */
  TELEMETRY__RESOURCE__RESOURCE_K_CONCENTRATION = 63,
  /*
   * S/m
   */
  TELEMETRY__RESOURCE__RESOURCE_CONDUCTIVITY = 64,
  /*
   * pH
   */
  TELEMETRY__RESOURCE__RESOURCE_PH = 65
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(TELEMETRY__RESOURCE)
} Telemetry__Resource;
typedef enum _Telemetry__Unit {
  TELEMETRY__UNIT__UNIT_UNSPECIFIED = 0,
  TELEMETRY__UNIT__UNIT_METER = 1,
  TELEMETRY__UNIT__UNIT_KILOGRAM = 2,
  TELEMETRY__UNIT__UNIT_GRAM = 3,
  TELEMETRY__UNIT__UNIT_SECOND = 4,
  TELEMETRY__UNIT__UNIT_AMPERE = 5,
  TELEMETRY__UNIT__UNIT_KELVIN = 6,
  TELEMETRY__UNIT__UNIT_CANDELA = 7,
  TELEMETRY__UNIT__UNIT_MOLE = 8,
  TELEMETRY__UNIT__UNIT_HERTZ = 9,
  TELEMETRY__UNIT__UNIT_RADIAN = 10,
  TELEMETRY__UNIT__UNIT_STERADIAN = 11,
  TELEMETRY__UNIT__UNIT_NEWTON = 12,
  TELEMETRY__UNIT__UNIT_PASCAL = 13,
  TELEMETRY__UNIT__UNIT_JOULE = 14,
  TELEMETRY__UNIT__UNIT_WATT = 15,
  TELEMETRY__UNIT__UNIT_COULOMB = 16,
  TELEMETRY__UNIT__UNIT_VOLT = 17,
  TELEMETRY__UNIT__UNIT_FARAD = 18,
  TELEMETRY__UNIT__UNIT_OHM = 19,
  TELEMETRY__UNIT__UNIT_SIEMENS = 20,
  TELEMETRY__UNIT__UNIT_WEBER = 21,
  TELEMETRY__UNIT__UNIT_TESLA = 22,
  TELEMETRY__UNIT__UNIT_HENRY = 23,
  TELEMETRY__UNIT__UNIT_DEGREES_CELSIUS = 24,
  TELEMETRY__UNIT__UNIT_LUMEN = 25,
  TELEMETRY__UNIT__UNIT_LUX = 26,
  TELEMETRY__UNIT__UNIT_BECQUEREL = 27,
  TELEMETRY__UNIT__UNIT_GRAY = 28,
  TELEMETRY__UNIT__UNIT_SIEVERT = 29,
  TELEMETRY__UNIT__UNIT_KATAL = 30,
  TELEMETRY__UNIT__UNIT_SQUARE_METER = 31,
  TELEMETRY__UNIT__UNIT_CUBIC_METER = 32,
  TELEMETRY__UNIT__UNIT_LITER = 33,
  TELEMETRY__UNIT__UNIT_METER_PER_SECOND = 34,
  TELEMETRY__UNIT__UNIT_METER_PER_SQUARE_SECOND = 35,
  TELEMETRY__UNIT__UNIT_CUBIC_METER_PER_SECOND = 36,
  TELEMETRY__UNIT__UNIT_LITER_PER_SECOND = 37,
  TELEMETRY__UNIT__UNIT_WATT_PER_SQUARE_METER = 38,
  TELEMETRY__UNIT__UNIT_CANDELA_PER_SQUARE_METER = 39,
  TELEMETRY__UNIT__UNIT_BIT = 40,
  TELEMETRY__UNIT__UNIT_BIT_PER_SECOND = 41,
  TELEMETRY__UNIT__UNIT_BYTE = 42,
  TELEMETRY__UNIT__UNIT_BYTE_PER_SECOND = 43,
  TELEMETRY__UNIT__UNIT_LATITUDE = 44,
  TELEMETRY__UNIT__UNIT_LONGITUDE = 45,
  TELEMETRY__UNIT__UNIT_PH = 46,
  TELEMETRY__UNIT__UNIT_DECIBEL = 47,
  TELEMETRY__UNIT__UNIT_DECIBEL_WATT = 48,
  TELEMETRY__UNIT__UNIT_BEL = 49,
  TELEMETRY__UNIT__UNIT_COUNT = 50,
  TELEMETRY__UNIT__UNIT_RATIO = 51,
  TELEMETRY__UNIT__UNIT_RELATIVE_HUMIDITY_PERCENTAGE = 52,
  TELEMETRY__UNIT__UNIT_ENERGY_LEVEL_PERCENTAGE = 53,
  TELEMETRY__UNIT__UNIT_ENERGY_LEVEL_SECONDS_REMAINING = 54,
  TELEMETRY__UNIT__UNIT_RATE_PER_SECOND = 55,
  TELEMETRY__UNIT__UNIT_RATE_PER_MINUTE = 56,
  TELEMETRY__UNIT__UNIT_BEAT_PER_MINUTE = 57,
  TELEMETRY__UNIT__UNIT_BEAT = 58,
  TELEMETRY__UNIT__UNIT_SIEMENS_PER_METER = 59,
  TELEMETRY__UNIT__UNIT_PART_PER_MILLION = 60,
  TELEMETRY__UNIT__UNIT_VOLT_AMPERE = 61
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(TELEMETRY__UNIT)
} Telemetry__Unit;
typedef enum _Telemetry__NetworkType {
  TELEMETRY__NETWORK_TYPE__NETWORK_TYPE_UNSPECIFIED = 0,
  TELEMETRY__NETWORK_TYPE__NETWORK_TYPE_MQTT_1 = 1,
  TELEMETRY__NETWORK_TYPE__NETWORK_TYPE_LORAWAN_1 = 2,
  TELEMETRY__NETWORK_TYPE__NETWORK_TYPE_LORAWAN_2 = 3,
  TELEMETRY__NETWORK_TYPE__NETWORK_TYPE_LORAWAN_3 = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(TELEMETRY__NETWORK_TYPE)
} Telemetry__NetworkType;
typedef enum _Telemetry__Severity {
  TELEMETRY__SEVERITY__SEVERITY_UNSPECIFIED = 0,
  TELEMETRY__SEVERITY__SEVERITY_LOW = 1,
  TELEMETRY__SEVERITY__SEVERITY_HIGH = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(TELEMETRY__SEVERITY)
} Telemetry__Severity;

/* --- messages --- */

struct  _Telemetry__SemVer
{
  ProtobufCMessage base;
  int32_t major;
  int32_t minor;
  int32_t patch;
};
#define TELEMETRY__SEM_VER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&telemetry__sem_ver__descriptor) \
    , 0, 0, 0 }


struct  _Telemetry__Record
{
  ProtobufCMessage base;
  Telemetry__Resource resource;
  int64_t time;
  double value;
  char *string_value;
  protobuf_c_boolean bool_value;
  ProtobufCBinaryData data_value;
  Telemetry__Severity severity;
  uint32_t alert_id;
  int64_t int_value;
  /*
   * Development purpose only
   */
  char *name;
  Telemetry__Unit unit;
};
#define TELEMETRY__RECORD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&telemetry__record__descriptor) \
    , TELEMETRY__RESOURCE__RESOURCE_UNSPECIFIED, 0, 0, (char *)protobuf_c_empty_string, 0, {0,NULL}, TELEMETRY__SEVERITY__SEVERITY_UNSPECIFIED, 0, 0, (char *)protobuf_c_empty_string, TELEMETRY__UNIT__UNIT_UNSPECIFIED }


struct  _Telemetry__TelemetryPack
{
  ProtobufCMessage base;
  size_t n_records;
  Telemetry__Record **records;
  Telemetry__Resource base_resource;
  int64_t base_time;
  Telemetry__NetworkType network_type;
  ProtobufCBinaryData network_id;
  /*
   * Development purpose only
   */
  char *base_name;
  Telemetry__Unit base_unit;
};
#define TELEMETRY__TELEMETRY_PACK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&telemetry__telemetry_pack__descriptor) \
    , 0,NULL, TELEMETRY__RESOURCE__RESOURCE_UNSPECIFIED, 0, TELEMETRY__NETWORK_TYPE__NETWORK_TYPE_UNSPECIFIED, {0,NULL}, (char *)protobuf_c_empty_string, TELEMETRY__UNIT__UNIT_UNSPECIFIED }


/* Telemetry__SemVer methods */
void   telemetry__sem_ver__init
                     (Telemetry__SemVer         *message);
size_t telemetry__sem_ver__get_packed_size
                     (const Telemetry__SemVer   *message);
size_t telemetry__sem_ver__pack
                     (const Telemetry__SemVer   *message,
                      uint8_t             *out);
size_t telemetry__sem_ver__pack_to_buffer
                     (const Telemetry__SemVer   *message,
                      ProtobufCBuffer     *buffer);
Telemetry__SemVer *
       telemetry__sem_ver__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   telemetry__sem_ver__free_unpacked
                     (Telemetry__SemVer *message,
                      ProtobufCAllocator *allocator);
/* Telemetry__Record methods */
void   telemetry__record__init
                     (Telemetry__Record         *message);
size_t telemetry__record__get_packed_size
                     (const Telemetry__Record   *message);
size_t telemetry__record__pack
                     (const Telemetry__Record   *message,
                      uint8_t             *out);
size_t telemetry__record__pack_to_buffer
                     (const Telemetry__Record   *message,
                      ProtobufCBuffer     *buffer);
Telemetry__Record *
       telemetry__record__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   telemetry__record__free_unpacked
                     (Telemetry__Record *message,
                      ProtobufCAllocator *allocator);
/* Telemetry__TelemetryPack methods */
void   telemetry__telemetry_pack__init
                     (Telemetry__TelemetryPack         *message);
size_t telemetry__telemetry_pack__get_packed_size
                     (const Telemetry__TelemetryPack   *message);
size_t telemetry__telemetry_pack__pack
                     (const Telemetry__TelemetryPack   *message,
                      uint8_t             *out);
size_t telemetry__telemetry_pack__pack_to_buffer
                     (const Telemetry__TelemetryPack   *message,
                      ProtobufCBuffer     *buffer);
Telemetry__TelemetryPack *
       telemetry__telemetry_pack__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   telemetry__telemetry_pack__free_unpacked
                     (Telemetry__TelemetryPack *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Telemetry__SemVer_Closure)
                 (const Telemetry__SemVer *message,
                  void *closure_data);
typedef void (*Telemetry__Record_Closure)
                 (const Telemetry__Record *message,
                  void *closure_data);
typedef void (*Telemetry__TelemetryPack_Closure)
                 (const Telemetry__TelemetryPack *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    telemetry__resource__descriptor;
extern const ProtobufCEnumDescriptor    telemetry__unit__descriptor;
extern const ProtobufCEnumDescriptor    telemetry__network_type__descriptor;
extern const ProtobufCEnumDescriptor    telemetry__severity__descriptor;
extern const ProtobufCMessageDescriptor telemetry__sem_ver__descriptor;
extern const ProtobufCMessageDescriptor telemetry__record__descriptor;
extern const ProtobufCMessageDescriptor telemetry__telemetry_pack__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_telemetry_2ftelemetry_2eproto__INCLUDED */
