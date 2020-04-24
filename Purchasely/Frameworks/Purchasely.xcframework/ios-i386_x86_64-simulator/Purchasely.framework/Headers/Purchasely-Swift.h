#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import StoreKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Purchasely",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



typedef SWIFT_ENUM(NSInteger, PLYAlertMessage, open) {
  PLYAlertMessageInAppSuccess = 0,
  PLYAlertMessageInAppDeferred = 1,
  PLYAlertMessageInAppSuccessUnauthentified = 2,
  PLYAlertMessageInAppRestorationSuccess = 3,
  PLYAlertMessageInAppRestorationError = 4,
  PLYAlertMessageInAppError = 5,
  PLYAlertMessageUnsubscribeAndroid = 6,
};

typedef SWIFT_ENUM(NSInteger, PLYEnvironment, open) {
  PLYEnvironmentProd = 0,
  PLYEnvironmentStaging = 1,
};

typedef SWIFT_ENUM(NSInteger, PLYEvent, open) {
  PLYEventAppStarted = 0,
  PLYEventProductPageViewed = 1,
  PLYEventLoginTapped = 2,
  PLYEventPurchaseFromStoreTapped = 3,
  PLYEventPurchaseTapped = 4,
  PLYEventInAppPurchasing = 5,
  PLYEventInAppPurchased = 6,
  PLYEventInAppRenewed = 7,
  PLYEventReceiptCreated = 8,
  PLYEventReceiptValidated = 9,
  PLYEventReceiptFailed = 10,
  PLYEventRestoreStarted = 11,
  PLYEventInAppRestored = 12,
  PLYEventRestoreSucceeded = 13,
  PLYEventRestoreFailed = 14,
  PLYEventInAppDeferred = 15,
  PLYEventInAppPurchaseFailed = 16,
  PLYEventLinkOpened = 17,
};


SWIFT_PROTOCOL("_TtP10Purchasely16PLYEventDelegate_")
@protocol PLYEventDelegate
- (void)eventTriggered:(enum PLYEvent)event properties:(NSDictionary<NSString *, id> * _Nullable)properties;
@end


SWIFT_CLASS("_TtC10Purchasely12PLYJsonModel")
@interface PLYJsonModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10Purchasely9PLYLogger")
@interface PLYLogger : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
  LogLevelDebug = 0,
  LogLevelInfo = 1,
  LogLevelWarn = 2,
  LogLevelError = 3,
};


SWIFT_CLASS("_TtC10Purchasely7PLYPlan")
@interface PLYPlan : PLYJsonModel
@property (nonatomic, copy) NSString * _Nonnull vendorId;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC10Purchasely10PLYProduct")
@interface PLYProduct : PLYJsonModel
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum PLYSubscriptionSource : NSInteger;

SWIFT_CLASS("_TtC10Purchasely15PLYSubscription")
@interface PLYSubscription : PLYJsonModel
@property (nonatomic, strong) PLYPlan * _Nonnull plan;
@property (nonatomic) enum PLYSubscriptionSource subscriptionSource;
- (void)unsubscribe;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PLYSubscriptionSource, open) {
  PLYSubscriptionSourceAppStore = 0,
  PLYSubscriptionSourcePlayStore = 1,
  PLYSubscriptionSourceNone = 2,
};

typedef SWIFT_ENUM(NSInteger, PLYUIControllerType, open) {
  PLYUIControllerTypeSubscriptionList = 0,
  PLYUIControllerTypeProductPage = 1,
};

@class UIViewController;

SWIFT_PROTOCOL("_TtP10Purchasely13PLYUIDelegate_")
@protocol PLYUIDelegate
- (void)displayWithController:(UIViewController * _Nonnull)controller type:(enum PLYUIControllerType)type;
- (void)displayWithAlert:(enum PLYAlertMessage)alert error:(NSError * _Nullable)error;
@end


/// This class manages the In App purchase process from grabbing the product details to performing
/// the purchase and sending the receipts to the server.
/// This manager is also meant to be used for restoration
SWIFT_CLASS("_TtC10Purchasely10Purchasely")
@interface Purchasely : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








@interface Purchasely (SWIFT_EXTENSION(Purchasely)) <PLYUIDelegate>
- (void)displayWithController:(UIViewController * _Nonnull)controller type:(enum PLYUIControllerType)type;
- (void)displayWithAlert:(enum PLYAlertMessage)alert error:(NSError * _Nullable)error;
@end






@interface Purchasely (SWIFT_EXTENSION(Purchasely))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull deviceKey;)
+ (NSString * _Nonnull)deviceKey SWIFT_WARN_UNUSED_RESULT;
+ (void)startWithAPIKey:(NSString * _Nonnull)apiKey appUserId:(NSString * _Nullable)appUserId eventDelegate:(id <PLYEventDelegate> _Nullable)eventDelegate uiDelegate:(id <PLYUIDelegate> _Nullable)uiDelegate logLevel:(enum LogLevel)logLevel;
+ (void)setEventDelegate:(id <PLYEventDelegate> _Nullable)eventDelegate;
+ (void)setUIDelegate:(id <PLYUIDelegate> _Nullable)uiDelegate;
+ (void)setAppUserId:(NSString * _Nullable)appUserId;
+ (void)isReadyToPurchase:(BOOL)ready;
+ (void)setEnvironment:(enum PLYEnvironment)environment;
+ (void)setLogLevel:(enum LogLevel)logLevel;
+ (void)productWith:(NSString * _Nonnull)vendorId success:(void (^ _Nonnull)(PLYProduct * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
+ (void)planWith:(NSString * _Nonnull)vendorId success:(void (^ _Nonnull)(PLYPlan * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
+ (void)userSubscriptionsWithSuccess:(void (^ _Nonnull)(NSArray<PLYSubscription *> * _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
+ (void)productControllerFor:(NSString * _Nonnull)productVendorId success:(void (^ _Nonnull)(UIViewController * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
/// This method performs a purchase on an plan of a Purchasely product
/// :param: plan the PLYPlan that you setup in Purchasely admin
/// :param: success the block called when the purchase was completed from end to end
/// :param: failure the block called when any error occured. The error can be displayed to the user using localizedDescription
+ (void)purchaseWithPlan:(PLYPlan * _Nonnull)plan success:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// This method is used to restore prevous purchases. Some might be successful and some in error.
/// :param: success The closure that is called when at least one item was successfully restored. It might contain an error in case some items weren’t restored successfully.
/// :param: failure The closure that is called when at no item was restored
+ (void)restoreAllProductsWithSuccess:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
@end



































#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__i386__) && __i386__
// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import StoreKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Purchasely",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



typedef SWIFT_ENUM(NSInteger, PLYAlertMessage, open) {
  PLYAlertMessageInAppSuccess = 0,
  PLYAlertMessageInAppDeferred = 1,
  PLYAlertMessageInAppSuccessUnauthentified = 2,
  PLYAlertMessageInAppRestorationSuccess = 3,
  PLYAlertMessageInAppRestorationError = 4,
  PLYAlertMessageInAppError = 5,
  PLYAlertMessageUnsubscribeAndroid = 6,
};

typedef SWIFT_ENUM(NSInteger, PLYEnvironment, open) {
  PLYEnvironmentProd = 0,
  PLYEnvironmentStaging = 1,
};

typedef SWIFT_ENUM(NSInteger, PLYEvent, open) {
  PLYEventAppStarted = 0,
  PLYEventProductPageViewed = 1,
  PLYEventLoginTapped = 2,
  PLYEventPurchaseFromStoreTapped = 3,
  PLYEventPurchaseTapped = 4,
  PLYEventInAppPurchasing = 5,
  PLYEventInAppPurchased = 6,
  PLYEventInAppRenewed = 7,
  PLYEventReceiptCreated = 8,
  PLYEventReceiptValidated = 9,
  PLYEventReceiptFailed = 10,
  PLYEventRestoreStarted = 11,
  PLYEventInAppRestored = 12,
  PLYEventRestoreSucceeded = 13,
  PLYEventRestoreFailed = 14,
  PLYEventInAppDeferred = 15,
  PLYEventInAppPurchaseFailed = 16,
  PLYEventLinkOpened = 17,
};


SWIFT_PROTOCOL("_TtP10Purchasely16PLYEventDelegate_")
@protocol PLYEventDelegate
- (void)eventTriggered:(enum PLYEvent)event properties:(NSDictionary<NSString *, id> * _Nullable)properties;
@end


SWIFT_CLASS("_TtC10Purchasely12PLYJsonModel")
@interface PLYJsonModel : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10Purchasely9PLYLogger")
@interface PLYLogger : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
  LogLevelDebug = 0,
  LogLevelInfo = 1,
  LogLevelWarn = 2,
  LogLevelError = 3,
};


SWIFT_CLASS("_TtC10Purchasely7PLYPlan")
@interface PLYPlan : PLYJsonModel
@property (nonatomic, copy) NSString * _Nonnull vendorId;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC10Purchasely10PLYProduct")
@interface PLYProduct : PLYJsonModel
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum PLYSubscriptionSource : NSInteger;

SWIFT_CLASS("_TtC10Purchasely15PLYSubscription")
@interface PLYSubscription : PLYJsonModel
@property (nonatomic, strong) PLYPlan * _Nonnull plan;
@property (nonatomic) enum PLYSubscriptionSource subscriptionSource;
- (void)unsubscribe;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, PLYSubscriptionSource, open) {
  PLYSubscriptionSourceAppStore = 0,
  PLYSubscriptionSourcePlayStore = 1,
  PLYSubscriptionSourceNone = 2,
};

typedef SWIFT_ENUM(NSInteger, PLYUIControllerType, open) {
  PLYUIControllerTypeSubscriptionList = 0,
  PLYUIControllerTypeProductPage = 1,
};

@class UIViewController;

SWIFT_PROTOCOL("_TtP10Purchasely13PLYUIDelegate_")
@protocol PLYUIDelegate
- (void)displayWithController:(UIViewController * _Nonnull)controller type:(enum PLYUIControllerType)type;
- (void)displayWithAlert:(enum PLYAlertMessage)alert error:(NSError * _Nullable)error;
@end


/// This class manages the In App purchase process from grabbing the product details to performing
/// the purchase and sending the receipts to the server.
/// This manager is also meant to be used for restoration
SWIFT_CLASS("_TtC10Purchasely10Purchasely")
@interface Purchasely : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








@interface Purchasely (SWIFT_EXTENSION(Purchasely)) <PLYUIDelegate>
- (void)displayWithController:(UIViewController * _Nonnull)controller type:(enum PLYUIControllerType)type;
- (void)displayWithAlert:(enum PLYAlertMessage)alert error:(NSError * _Nullable)error;
@end






@interface Purchasely (SWIFT_EXTENSION(Purchasely))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull deviceKey;)
+ (NSString * _Nonnull)deviceKey SWIFT_WARN_UNUSED_RESULT;
+ (void)startWithAPIKey:(NSString * _Nonnull)apiKey appUserId:(NSString * _Nullable)appUserId eventDelegate:(id <PLYEventDelegate> _Nullable)eventDelegate uiDelegate:(id <PLYUIDelegate> _Nullable)uiDelegate logLevel:(enum LogLevel)logLevel;
+ (void)setEventDelegate:(id <PLYEventDelegate> _Nullable)eventDelegate;
+ (void)setUIDelegate:(id <PLYUIDelegate> _Nullable)uiDelegate;
+ (void)setAppUserId:(NSString * _Nullable)appUserId;
+ (void)isReadyToPurchase:(BOOL)ready;
+ (void)setEnvironment:(enum PLYEnvironment)environment;
+ (void)setLogLevel:(enum LogLevel)logLevel;
+ (void)productWith:(NSString * _Nonnull)vendorId success:(void (^ _Nonnull)(PLYProduct * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
+ (void)planWith:(NSString * _Nonnull)vendorId success:(void (^ _Nonnull)(PLYPlan * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
+ (void)userSubscriptionsWithSuccess:(void (^ _Nonnull)(NSArray<PLYSubscription *> * _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
+ (void)productControllerFor:(NSString * _Nonnull)productVendorId success:(void (^ _Nonnull)(UIViewController * _Nonnull))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
/// This method performs a purchase on an plan of a Purchasely product
/// :param: plan the PLYPlan that you setup in Purchasely admin
/// :param: success the block called when the purchase was completed from end to end
/// :param: failure the block called when any error occured. The error can be displayed to the user using localizedDescription
+ (void)purchaseWithPlan:(PLYPlan * _Nonnull)plan success:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
/// This method is used to restore prevous purchases. Some might be successful and some in error.
/// :param: success The closure that is called when at least one item was successfully restored. It might contain an error in case some items weren’t restored successfully.
/// :param: failure The closure that is called when at no item was restored
+ (void)restoreAllProductsWithSuccess:(void (^ _Nonnull)(void))success failure:(void (^ _Nonnull)(NSError * _Nonnull))failure;
@end



































#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
