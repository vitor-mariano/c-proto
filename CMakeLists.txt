idf_component_register(
  SRC_DIRS "main/proto/command" "main/proto/projects/fotocelula" "main/proto/telemetry"
  INCLUDE_DIRS "main" "main/proto"
  REQUIRES "protobuf-c"
)