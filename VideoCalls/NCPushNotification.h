//
//  NCPushNotification.h
//  VideoCalls
//
//  Created by Ivan Sein on 24.11.17.
//  Copyright © 2017 struktur AG. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, NCPushNotificationType) {
    NCPushNotificationTypeUnknown,
    NCPushNotificationTypeCall,
    NCPushNotificationTypeRoom,
    NCPushNotificationTypeChat
};

extern NSString * const kNCPNAppKey;
extern NSString * const kNCPNTypeKey;
extern NSString * const kNCPNSubjectKey;
extern NSString * const kNCPNIdKey;
extern NSString * const kNCPNTypeCallKey;
extern NSString * const kNCPNTypeRoomKey;
extern NSString * const kNCPNTypeChatKey;

extern NSString * const NCPushNotificationJoinCallAcceptedNotification;

@interface NCPushNotification : NSObject

@property (nonatomic, copy) NSString *app;
@property (nonatomic, assign) NCPushNotificationType type;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, assign) NSInteger pnId;

+ (instancetype)pushNotificationFromDecryptedString:(NSString *)decryptedString;
- (NSString *)bodyForRemoteAlerts;

@end
