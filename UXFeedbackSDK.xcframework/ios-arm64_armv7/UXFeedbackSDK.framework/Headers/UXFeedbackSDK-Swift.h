#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.4.2 (swiftlang-1205.0.28.2 clang-1205.0.19.57)
#ifndef UXFEEDBACKSDK_SWIFT_H
#define UXFEEDBACKSDK_SWIFT_H
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="UXFeedbackSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif




@class NSNumber;
@class NSString;

@interface UIColor (SWIFT_EXTENSION(UXFeedbackSDK))
/// The shorthand three-digit hexadecimal representation of color.
/// #RGB defines to the color #RRGGBB.
/// \param hex3 Three-digit hexadecimal value.
///
/// \param alpha 0.0 - 1.0. The default is 1.0.
///
- (nonnull instancetype)initWithHex3:(uint16_t)hex3 alpha:(CGFloat)alpha;
/// The shorthand four-digit hexadecimal representation of color with alpha.
/// #RGBA defines to the color #RRGGBBAA.
/// \param hex4 Four-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex4:(uint16_t)hex4;
/// The six-digit hexadecimal representation of color of the form #RRGGBB.
/// \param hex6 Six-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex6:(uint32_t)hex6 alpha:(CGFloat)alpha;
/// The six-digit hexadecimal representation of color with alpha of the form #RRGGBBAA.
/// \param hex8 Eight-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex8:(uint32_t)hex8;
/// The rgba string representation of color with alpha of the form #RRGGBBAA/#RRGGBB, throws error.
/// \param rgba String value.
///
- (nullable instancetype)initWithRgba_throws:(NSString * _Nonnull)rgba error:(NSError * _Nullable * _Nullable)error;
/// The rgba string representation of color with alpha of the form #RRGGBBAA/#RRGGBB, fails to default color.
/// \param rgba String value.
///
- (nonnull instancetype)init:(NSString * _Nonnull)rgba defaultColor:(UIColor * _Nonnull)defaultColor;
/// Hex string of a UIColor instance, throws error.
/// \param includeAlpha Whether the alpha should be included.
///
- (NSString * _Nullable)hexStringThrows:(BOOL)includeAlpha error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Hex string of a UIColor instance, fails to empty string.
/// \param includeAlpha Whether the alpha should be included.
///
- (NSString * _Nonnull)hexString:(BOOL)includeAlpha SWIFT_WARN_UNUSED_RESULT;
@end
















@class UIFont;
@class UIImage;
@class NSURL;

SWIFT_CLASS("_TtC13UXFeedbackSDK9UXFBTheme")
@interface UXFBTheme : NSObject
@property (nonatomic, strong) UIColor * _Nonnull text03Color;
@property (nonatomic, strong) UIColor * _Nonnull inputBorderColor;
@property (nonatomic, strong) UIColor * _Nonnull iconColor;
@property (nonatomic, strong) UIColor * _Nonnull btnBgColorActive;
@property (nonatomic) CGFloat btnBorderRadius;
@property (nonatomic, strong) UIColor * _Nonnull errorColorSecondary;
@property (nonatomic, strong) UIColor * _Nonnull errorColorPrimary;
@property (nonatomic, strong) UIColor * _Nonnull mainColor;
@property (nonatomic, strong) UIColor * _Nonnull controlBgColorActive;
@property (nonatomic) CGFloat formBorderRadius;
@property (nonatomic, strong) UIColor * _Nonnull inputBgColor;
@property (nonatomic, strong) UIColor * _Nonnull text01Color;
@property (nonatomic, strong) UIColor * _Nonnull controlBgColor;
@property (nonatomic, strong) UIColor * _Nonnull controlIconColor;
@property (nonatomic, strong) UIColor * _Nonnull btnBgColor;
@property (nonatomic, strong) UIColor * _Nonnull text02Color;
@property (nonatomic, strong) UIColor * _Nonnull btnTextColor;
@property (nonatomic, strong) UIColor * _Nonnull bgColor;
@property (nonatomic, copy) NSString * _Nullable fontRegularName;
@property (nonatomic, copy) NSString * _Nullable fontMediumName;
@property (nonatomic, copy) NSString * _Nullable fontBoldName;
@property (nonatomic, strong) UIFont * _Nonnull regularFont;
- (UIFont * _Nonnull)regularFontWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) UIFont * _Nonnull mediumFont;
- (UIFont * _Nonnull)mediumFontWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) UIFont * _Nonnull boldFont;
- (UIFont * _Nonnull)boldFontWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (UIImage * _Nullable)getSmileWithImageName:(NSString * _Nonnull)imageName completion:(SWIFT_NOESCAPE void (^ _Nonnull)(UIImage * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)smileImageNameBy:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (BOOL)loadFontWithFontUrl:(NSURL * _Nonnull)fontUrl SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;

SWIFT_CLASS("_TtC13UXFeedbackSDK11UXFBaseCell")
@interface UXFBaseCell : UITableViewCell
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerTransitionCoordinator;
@class NSBundle;

SWIFT_CLASS("_TtC13UXFeedbackSDK25UXFCampaignViewController")
@interface UXFCampaignViewController : UIViewController
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)dismissViewControllerAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;
@class UITouch;

@interface UXFCampaignViewController (SWIFT_EXTENSION(UXFeedbackSDK)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end

@class UITableView;
@class UIView;
@class NSIndexPath;

@interface UXFCampaignViewController (SWIFT_EXTENSION(UXFeedbackSDK)) <UITableViewDataSource, UITableViewDelegate>
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC13UXFeedbackSDK8UXFError")
@interface UXFError : NSError
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict SWIFT_UNAVAILABLE;
@end

@protocol UXFeedbackCampaignDelegate;
@class UIWindowScene;
@class UIWindow;

SWIFT_CLASS("_TtC13UXFeedbackSDK10UXFeedback")
@interface UXFeedback : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UXFeedback * _Nonnull sharedSDK;)
+ (UXFeedback * _Nonnull)sharedSDK SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) id <UXFeedbackCampaignDelegate> _Nullable delegate;
@property (nonatomic) BOOL debugEnabled;
@property (nonatomic) BOOL animationEnabled;
@property (nonatomic) BOOL canDisplayCampaings;
@property (nonatomic, readonly) BOOL isCampaignsLoaded;
@property (nonatomic) BOOL uiBlocked;
@property (nonatomic) BOOL closeOnSwipe;
@property (nonatomic, readonly, strong) UXFCampaignViewController * _Nullable currentForm;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setThemeWithTheme:(UXFBTheme * _Nonnull)theme;
- (void)setSlideinBlackoutWithColor:(NSString * _Nonnull)color opactity:(NSInteger)opactity blur:(NSInteger)blur;
- (void)setFullscreenBlackoutWithColor:(NSString * _Nonnull)color opactity:(NSInteger)opactity blur:(NSInteger)blur;
- (void)setupWithAppID:(NSString * _Nonnull)appID windowScene:(UIWindowScene * _Nonnull)windowScene theme:(UXFBTheme * _Nullable)theme completion:(void (^ _Nullable)(BOOL))completion SWIFT_AVAILABILITY(ios,introduced=13.0);
- (void)setupWithAppID:(NSString * _Nonnull)appID theme:(UXFBTheme * _Nullable)theme completion:(void (^ _Nullable)(BOOL))completion;
- (void)setupWithAppID:(NSString * _Nonnull)appID window:(UIWindow * _Nullable)window theme:(UXFBTheme * _Nullable)theme completion:(void (^ _Nullable)(BOOL))completion;
- (void)sendEventWithEvent:(NSString * _Nonnull)event fromController:(UIViewController * _Nullable)fromController;
- (void)resetAllCampaignsDataWithCompletion:(void (^ _Nullable)(void))completion;
- (void)stopCampaign;
@end



SWIFT_PROTOCOL("_TtP13UXFeedbackSDK26UXFeedbackCampaignDelegate_")
@protocol UXFeedbackCampaignDelegate
- (void)campaignDidLoadWithSuccess:(BOOL)success;
- (void)campaignDidReceiveErrorWithErrorString:(NSString * _Nonnull)errorString;
- (void)campaignDidShowWithEventName:(NSString * _Nonnull)eventName;
- (void)campaignDidCloseWithEventName:(NSString * _Nonnull)eventName;
@end


SWIFT_CLASS("_TtC13UXFeedbackSDK16UXFeedbackResult")
@interface UXFeedbackResult : NSObject
@property (nonatomic) BOOL sent;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIVisualEffect;

/// VisualEffectView is a dynamic background blur view.
SWIFT_CLASS("_TtC13UXFeedbackSDK16VisualEffectView")
@interface VisualEffectView : UIVisualEffectView
- (nonnull instancetype)initWithEffect:(UIVisualEffect * _Nullable)effect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.4.2 (swiftlang-1205.0.28.2 clang-1205.0.19.57)
#ifndef UXFEEDBACKSDK_SWIFT_H
#define UXFEEDBACKSDK_SWIFT_H
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="UXFeedbackSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif




@class NSNumber;
@class NSString;

@interface UIColor (SWIFT_EXTENSION(UXFeedbackSDK))
/// The shorthand three-digit hexadecimal representation of color.
/// #RGB defines to the color #RRGGBB.
/// \param hex3 Three-digit hexadecimal value.
///
/// \param alpha 0.0 - 1.0. The default is 1.0.
///
- (nonnull instancetype)initWithHex3:(uint16_t)hex3 alpha:(CGFloat)alpha;
/// The shorthand four-digit hexadecimal representation of color with alpha.
/// #RGBA defines to the color #RRGGBBAA.
/// \param hex4 Four-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex4:(uint16_t)hex4;
/// The six-digit hexadecimal representation of color of the form #RRGGBB.
/// \param hex6 Six-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex6:(uint32_t)hex6 alpha:(CGFloat)alpha;
/// The six-digit hexadecimal representation of color with alpha of the form #RRGGBBAA.
/// \param hex8 Eight-digit hexadecimal value.
///
- (nonnull instancetype)initWithHex8:(uint32_t)hex8;
/// The rgba string representation of color with alpha of the form #RRGGBBAA/#RRGGBB, throws error.
/// \param rgba String value.
///
- (nullable instancetype)initWithRgba_throws:(NSString * _Nonnull)rgba error:(NSError * _Nullable * _Nullable)error;
/// The rgba string representation of color with alpha of the form #RRGGBBAA/#RRGGBB, fails to default color.
/// \param rgba String value.
///
- (nonnull instancetype)init:(NSString * _Nonnull)rgba defaultColor:(UIColor * _Nonnull)defaultColor;
/// Hex string of a UIColor instance, throws error.
/// \param includeAlpha Whether the alpha should be included.
///
- (NSString * _Nullable)hexStringThrows:(BOOL)includeAlpha error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Hex string of a UIColor instance, fails to empty string.
/// \param includeAlpha Whether the alpha should be included.
///
- (NSString * _Nonnull)hexString:(BOOL)includeAlpha SWIFT_WARN_UNUSED_RESULT;
@end
















@class UIFont;
@class UIImage;
@class NSURL;

SWIFT_CLASS("_TtC13UXFeedbackSDK9UXFBTheme")
@interface UXFBTheme : NSObject
@property (nonatomic, strong) UIColor * _Nonnull text03Color;
@property (nonatomic, strong) UIColor * _Nonnull inputBorderColor;
@property (nonatomic, strong) UIColor * _Nonnull iconColor;
@property (nonatomic, strong) UIColor * _Nonnull btnBgColorActive;
@property (nonatomic) CGFloat btnBorderRadius;
@property (nonatomic, strong) UIColor * _Nonnull errorColorSecondary;
@property (nonatomic, strong) UIColor * _Nonnull errorColorPrimary;
@property (nonatomic, strong) UIColor * _Nonnull mainColor;
@property (nonatomic, strong) UIColor * _Nonnull controlBgColorActive;
@property (nonatomic) CGFloat formBorderRadius;
@property (nonatomic, strong) UIColor * _Nonnull inputBgColor;
@property (nonatomic, strong) UIColor * _Nonnull text01Color;
@property (nonatomic, strong) UIColor * _Nonnull controlBgColor;
@property (nonatomic, strong) UIColor * _Nonnull controlIconColor;
@property (nonatomic, strong) UIColor * _Nonnull btnBgColor;
@property (nonatomic, strong) UIColor * _Nonnull text02Color;
@property (nonatomic, strong) UIColor * _Nonnull btnTextColor;
@property (nonatomic, strong) UIColor * _Nonnull bgColor;
@property (nonatomic, copy) NSString * _Nullable fontRegularName;
@property (nonatomic, copy) NSString * _Nullable fontMediumName;
@property (nonatomic, copy) NSString * _Nullable fontBoldName;
@property (nonatomic, strong) UIFont * _Nonnull regularFont;
- (UIFont * _Nonnull)regularFontWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) UIFont * _Nonnull mediumFont;
- (UIFont * _Nonnull)mediumFontWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) UIFont * _Nonnull boldFont;
- (UIFont * _Nonnull)boldFontWithSize:(CGFloat)size SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (UIImage * _Nullable)getSmileWithImageName:(NSString * _Nonnull)imageName completion:(SWIFT_NOESCAPE void (^ _Nonnull)(UIImage * _Nonnull))completion SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)smileImageNameBy:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (BOOL)loadFontWithFontUrl:(NSURL * _Nonnull)fontUrl SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;

SWIFT_CLASS("_TtC13UXFeedbackSDK11UXFBaseCell")
@interface UXFBaseCell : UITableViewCell
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerTransitionCoordinator;
@class NSBundle;

SWIFT_CLASS("_TtC13UXFeedbackSDK25UXFCampaignViewController")
@interface UXFCampaignViewController : UIViewController
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)dismissViewControllerAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;
@class UITouch;

@interface UXFCampaignViewController (SWIFT_EXTENSION(UXFeedbackSDK)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end

@class UITableView;
@class UIView;
@class NSIndexPath;

@interface UXFCampaignViewController (SWIFT_EXTENSION(UXFeedbackSDK)) <UITableViewDataSource, UITableViewDelegate>
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC13UXFeedbackSDK8UXFError")
@interface UXFError : NSError
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict SWIFT_UNAVAILABLE;
@end

@protocol UXFeedbackCampaignDelegate;
@class UIWindowScene;
@class UIWindow;

SWIFT_CLASS("_TtC13UXFeedbackSDK10UXFeedback")
@interface UXFeedback : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) UXFeedback * _Nonnull sharedSDK;)
+ (UXFeedback * _Nonnull)sharedSDK SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) id <UXFeedbackCampaignDelegate> _Nullable delegate;
@property (nonatomic) BOOL debugEnabled;
@property (nonatomic) BOOL animationEnabled;
@property (nonatomic) BOOL canDisplayCampaings;
@property (nonatomic, readonly) BOOL isCampaignsLoaded;
@property (nonatomic) BOOL uiBlocked;
@property (nonatomic) BOOL closeOnSwipe;
@property (nonatomic, readonly, strong) UXFCampaignViewController * _Nullable currentForm;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setThemeWithTheme:(UXFBTheme * _Nonnull)theme;
- (void)setSlideinBlackoutWithColor:(NSString * _Nonnull)color opactity:(NSInteger)opactity blur:(NSInteger)blur;
- (void)setFullscreenBlackoutWithColor:(NSString * _Nonnull)color opactity:(NSInteger)opactity blur:(NSInteger)blur;
- (void)setupWithAppID:(NSString * _Nonnull)appID windowScene:(UIWindowScene * _Nonnull)windowScene theme:(UXFBTheme * _Nullable)theme completion:(void (^ _Nullable)(BOOL))completion SWIFT_AVAILABILITY(ios,introduced=13.0);
- (void)setupWithAppID:(NSString * _Nonnull)appID theme:(UXFBTheme * _Nullable)theme completion:(void (^ _Nullable)(BOOL))completion;
- (void)setupWithAppID:(NSString * _Nonnull)appID window:(UIWindow * _Nullable)window theme:(UXFBTheme * _Nullable)theme completion:(void (^ _Nullable)(BOOL))completion;
- (void)sendEventWithEvent:(NSString * _Nonnull)event fromController:(UIViewController * _Nullable)fromController;
- (void)resetAllCampaignsDataWithCompletion:(void (^ _Nullable)(void))completion;
- (void)stopCampaign;
@end



SWIFT_PROTOCOL("_TtP13UXFeedbackSDK26UXFeedbackCampaignDelegate_")
@protocol UXFeedbackCampaignDelegate
- (void)campaignDidLoadWithSuccess:(BOOL)success;
- (void)campaignDidReceiveErrorWithErrorString:(NSString * _Nonnull)errorString;
- (void)campaignDidShowWithEventName:(NSString * _Nonnull)eventName;
- (void)campaignDidCloseWithEventName:(NSString * _Nonnull)eventName;
@end


SWIFT_CLASS("_TtC13UXFeedbackSDK16UXFeedbackResult")
@interface UXFeedbackResult : NSObject
@property (nonatomic) BOOL sent;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIVisualEffect;

/// VisualEffectView is a dynamic background blur view.
SWIFT_CLASS("_TtC13UXFeedbackSDK16VisualEffectView")
@interface VisualEffectView : UIVisualEffectView
- (nonnull instancetype)initWithEffect:(UIVisualEffect * _Nullable)effect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
