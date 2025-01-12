/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: projects/concentradora/concentradora.proto */

#ifndef PROTOBUF_C_projects_2fconcentradora_2fconcentradora_2eproto__INCLUDED
#define PROTOBUF_C_projects_2fconcentradora_2fconcentradora_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif




/* --- enums --- */

typedef enum _Projects__Concentradora__Alert {
  PROJECTS__CONCENTRADORA__ALERT__ALERT_UNSPECIFIED = 0,
  PROJECTS__CONCENTRADORA__ALERT__ALERT_NO_VOLTAGE = 1,
  PROJECTS__CONCENTRADORA__ALERT__ALERT_LOW_VOLTAGE = 2,
  PROJECTS__CONCENTRADORA__ALERT__ALERT_HIGH_VOLTAGE = 3,
  PROJECTS__CONCENTRADORA__ALERT__ALERT_HIGH_INTERNAL_TEMPERATURE = 4,
  PROJECTS__CONCENTRADORA__ALERT__ALERT_HIGH_EXTERNAL_TEMPERATURE = 5,
  PROJECTS__CONCENTRADORA__ALERT__ALERT_POWER_OUTAGE = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(PROJECTS__CONCENTRADORA__ALERT)
} Projects__Concentradora__Alert;

/* --- messages --- */

/* --- per-message closures --- */


/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    projects__concentradora__alert__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_projects_2fconcentradora_2fconcentradora_2eproto__INCLUDED */
