/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: command/command.proto */

#ifndef PROTOBUF_C_command_2fcommand_2eproto__INCLUDED
#define PROTOBUF_C_command_2fcommand_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "telemetry/telemetry.pb-c.h"

typedef struct Command__Trigger Command__Trigger;
typedef struct Command__Command Command__Command;
typedef struct Command__CommandPack Command__CommandPack;


/* --- enums --- */

typedef enum _Command__TriggerType {
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_UNSPECIFIED = 0,
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_VALUE = 1,
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_GREATER_THAN_OR_EQUAL = 2,
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_MIN = 2,
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_LESS_THAN_OR_EQUAL = 3,
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_MAX = 3,
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_DELTA = 4,
  COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_RANGE = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(COMMAND__TRIGGER_TYPE)
} Command__TriggerType;

/* --- messages --- */

struct  Command__Trigger
{
  ProtobufCMessage base;
  Command__TriggerType type;
  double value;
  size_t n_range;
  double *range;
  Telemetry__Resource resource;
  int64_t int_value;
};
#define COMMAND__TRIGGER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&command__trigger__descriptor) \
    , COMMAND__TRIGGER_TYPE__TRIGGER_TYPE_UNSPECIFIED, 0, 0,NULL, TELEMETRY__RESOURCE__RESOURCE_UNSPECIFIED, 0 }


struct  Command__Command
{
  ProtobufCMessage base;
  uint32_t resource_id;
  double value;
  char *string_value;
  protobuf_c_boolean bool_value;
  ProtobufCBinaryData data_value;
  Telemetry__Unit unit;
  Command__Trigger *trigger;
  char *cron;
  uint32_t duration;
  int64_t int_value;
};
#define COMMAND__COMMAND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&command__command__descriptor) \
    , 0, 0, (char *)protobuf_c_empty_string, 0, {0,NULL}, TELEMETRY__UNIT__UNIT_UNSPECIFIED, NULL, (char *)protobuf_c_empty_string, 0, 0 }


struct  Command__CommandPack
{
  ProtobufCMessage base;
  size_t n_commands;
  Command__Command **commands;
};
#define COMMAND__COMMAND_PACK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&command__command_pack__descriptor) \
    , 0,NULL }


/* Command__Trigger methods */
void   command__trigger__init
                     (Command__Trigger         *message);
size_t command__trigger__get_packed_size
                     (const Command__Trigger   *message);
size_t command__trigger__pack
                     (const Command__Trigger   *message,
                      uint8_t             *out);
size_t command__trigger__pack_to_buffer
                     (const Command__Trigger   *message,
                      ProtobufCBuffer     *buffer);
Command__Trigger *
       command__trigger__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   command__trigger__free_unpacked
                     (Command__Trigger *message,
                      ProtobufCAllocator *allocator);
/* Command__Command methods */
void   command__command__init
                     (Command__Command         *message);
size_t command__command__get_packed_size
                     (const Command__Command   *message);
size_t command__command__pack
                     (const Command__Command   *message,
                      uint8_t             *out);
size_t command__command__pack_to_buffer
                     (const Command__Command   *message,
                      ProtobufCBuffer     *buffer);
Command__Command *
       command__command__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   command__command__free_unpacked
                     (Command__Command *message,
                      ProtobufCAllocator *allocator);
/* Command__CommandPack methods */
void   command__command_pack__init
                     (Command__CommandPack         *message);
size_t command__command_pack__get_packed_size
                     (const Command__CommandPack   *message);
size_t command__command_pack__pack
                     (const Command__CommandPack   *message,
                      uint8_t             *out);
size_t command__command_pack__pack_to_buffer
                     (const Command__CommandPack   *message,
                      ProtobufCBuffer     *buffer);
Command__CommandPack *
       command__command_pack__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   command__command_pack__free_unpacked
                     (Command__CommandPack *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Command__Trigger_Closure)
                 (const Command__Trigger *message,
                  void *closure_data);
typedef void (*Command__Command_Closure)
                 (const Command__Command *message,
                  void *closure_data);
typedef void (*Command__CommandPack_Closure)
                 (const Command__CommandPack *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    command__trigger_type__descriptor;
extern const ProtobufCMessageDescriptor command__trigger__descriptor;
extern const ProtobufCMessageDescriptor command__command__descriptor;
extern const ProtobufCMessageDescriptor command__command_pack__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_command_2fcommand_2eproto__INCLUDED */
