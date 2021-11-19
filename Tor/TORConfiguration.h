//
//  TORConfiguration.h
//  Tor
//
//  Created by Conrad Kramer on 8/10/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(TorConfiguration)
@interface TORConfiguration : NSObject

@property (nonatomic, copy, nullable) NSURL *dataDirectory;
@property (nonatomic, copy, nullable, readonly) NSURL *controlPortFile;
@property (nonatomic, copy, nullable) NSURL *controlSocket;
@property (nonatomic, copy, nullable) NSURL *socksURL;
@property (nonatomic, copy, nullable) NSURL *clientAuthDirectory;

@property (nonatomic) BOOL ignoreMissingTorrc;
@property (nonatomic) BOOL cookieAuthentication;
@property (nonatomic) BOOL autoControlPort;

@property (nonatomic, copy, nullable, readonly) NSData *cookie;

@property (nonatomic, copy, null_resettable) NSDictionary<NSString *, NSString *> *options;
@property (nonatomic, copy, null_resettable) NSArray<NSString *> *arguments;

- (NSArray<NSString *> *)compile;

@end

NS_ASSUME_NONNULL_END
