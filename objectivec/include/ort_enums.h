// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * The ORT logging verbosity levels.
 */
typedef NS_ENUM(int32_t, ORTLoggingLevel) {
  ORTLoggingLevelVerbose,
  ORTLoggingLevelInfo,
  ORTLoggingLevelWarning,
  ORTLoggingLevelError,
  ORTLoggingLevelFatal,
};

/**
 * The ORT value types.
 * Currently, a subset of all types is supported.
 */
typedef NS_ENUM(int32_t, ORTValueType) {
  ORTValueTypeUnknown,
  ORTValueTypeTensor,
};

/**
 * The ORT tensor element data types.
 * Currently, a subset of all types is supported.
 */
typedef NS_ENUM(int32_t, ORTTensorElementDataType) {
  ORTTensorElementDataTypeUndefined,
  ORTTensorElementDataTypeFloat,
  ORTTensorElementDataTypeInt8,
  ORTTensorElementDataTypeUInt8,
  ORTTensorElementDataTypeInt32,
  ORTTensorElementDataTypeUInt32,
  ORTTensorElementDataTypeInt64,
  ORTTensorElementDataTypeUInt64,
  ORTTensorElementDataTypeString,
  // PitchNotes mirror addition (X-014, 2026-11-22): upstream subset lacked
  // Double — SwiftF0's pitch output is tensor(double). Appended LAST so all
  // existing enum VALUES stay stable (implicit NS_ENUM numbering).
  ORTTensorElementDataTypeDouble,
};

/**
 * The ORT graph optimization levels.
 * See here for more details:
 * https://onnxruntime.ai/docs/performance/model-optimizations/graph-optimizations.html
 */
typedef NS_ENUM(int32_t, ORTGraphOptimizationLevel) {
  ORTGraphOptimizationLevelNone,
  ORTGraphOptimizationLevelBasic,
  ORTGraphOptimizationLevelExtended,
  ORTGraphOptimizationLevelLayout,
  ORTGraphOptimizationLevelAll,
};

NS_ASSUME_NONNULL_END
