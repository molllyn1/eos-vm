#pragma once
#include <eosio/vm/opcodes_def.hpp>
#include <eosio/vm/vector.hpp>
#include <eosio/vm/variant.hpp>

#include <map>

namespace eosio { namespace vm {
   enum opcodes {
      CONTROL_FLOW_OPS(CREATE_ENUM)
      BR_TABLE_OP(CREATE_ENUM)
      RETURN_OP(CREATE_ENUM)
      CALL_OPS(CREATE_ENUM)
      PARAMETRIC_OPS(CREATE_ENUM)
      VARIABLE_ACCESS_OPS(CREATE_ENUM)
      MEMORY_OPS(CREATE_ENUM)
      I32_CONSTANT_OPS(CREATE_ENUM)
      I64_CONSTANT_OPS(CREATE_ENUM)
      F32_CONSTANT_OPS(CREATE_ENUM)
      F64_CONSTANT_OPS(CREATE_ENUM)
      COMPARISON_OPS(CREATE_ENUM)
      NUMERIC_OPS(CREATE_ENUM)
      CONVERSION_OPS(CREATE_ENUM)
      SYNTHETIC_OPS(CREATE_ENUM)
      EMPTY_OPS(CREATE_ENUM)
      ERROR_OPS(CREATE_ENUM)
   };
   
   struct opcode_utils {
      std::map<uint16_t, std::string> opcode_map{
         CONTROL_FLOW_OPS(CREATE_MAP)
         BR_TABLE_OP(CREATE_MAP)
         RETURN_OP(CREATE_MAP)
         CALL_OPS(CREATE_MAP)
         PARAMETRIC_OPS(CREATE_MAP)
         VARIABLE_ACCESS_OPS(CREATE_MAP)
         MEMORY_OPS(CREATE_MAP)
         I32_CONSTANT_OPS(CREATE_MAP)
         I64_CONSTANT_OPS(CREATE_MAP)
         F32_CONSTANT_OPS(CREATE_MAP)
         F64_CONSTANT_OPS(CREATE_MAP)
         COMPARISON_OPS(CREATE_MAP)
         NUMERIC_OPS(CREATE_MAP)
         CONVERSION_OPS(CREATE_MAP)
         SYNTHETIC_OPS(CREATE_MAP)
         EMPTY_OPS(CREATE_MAP)
         ERROR_OPS(CREATE_MAP)
      };
   }; 

   enum imm_types {
      none,
      block_imm,
      varuint32_imm,
      br_table_imm,
   };

   CONTROL_FLOW_OPS(CREATE_CONTROL_FLOW_TYPES)
   BR_TABLE_OP(CREATE_BR_TABLE_TYPE)
   RETURN_OP(CREATE_TYPES)
   CALL_OPS(CREATE_CALL_TYPES)
   PARAMETRIC_OPS(CREATE_TYPES)
   VARIABLE_ACCESS_OPS(CREATE_VARIABLE_ACCESS_TYPES)
   MEMORY_OPS(CREATE_MEMORY_TYPES)
   I32_CONSTANT_OPS(CREATE_I32_CONSTANT_TYPE)
   I64_CONSTANT_OPS(CREATE_I64_CONSTANT_TYPE)
   F32_CONSTANT_OPS(CREATE_F32_CONSTANT_TYPE)
   F64_CONSTANT_OPS(CREATE_F64_CONSTANT_TYPE)
   COMPARISON_OPS(CREATE_TYPES)
   NUMERIC_OPS(CREATE_TYPES)
   CONVERSION_OPS(CREATE_TYPES)
   SYNTHETIC_OPS(CREATE_SYNTHETIC_TYPES)
   EMPTY_OPS(CREATE_TYPES)
   ERROR_OPS(CREATE_TYPES)

   using opcode = variant<
      CONTROL_FLOW_OPS(IDENTITY)
      BR_TABLE_OP(IDENTITY)
      RETURN_OP(IDENTITY)
      CALL_OPS(IDENTITY)
      PARAMETRIC_OPS(IDENTITY)
      VARIABLE_ACCESS_OPS(IDENTITY)
      MEMORY_OPS(IDENTITY)
      I32_CONSTANT_OPS(IDENTITY)
      I64_CONSTANT_OPS(IDENTITY)
      F32_CONSTANT_OPS(IDENTITY)
      F64_CONSTANT_OPS(IDENTITY)
      COMPARISON_OPS(IDENTITY)
      NUMERIC_OPS(IDENTITY)
      CONVERSION_OPS(IDENTITY)
      SYNTHETIC_OPS(IDENTITY)
      EMPTY_OPS(IDENTITY)
      ERROR_OPS(IDENTITY_END)
      >;
}} // namespace eosio::vm
