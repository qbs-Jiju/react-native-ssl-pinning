
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRNSslPinningSpec.h"

@interface RNSslPinning : NSObject <NativeRNSslPinningSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RNSslPinning : NSObject <RCTBridgeModule>
#endif

@end
