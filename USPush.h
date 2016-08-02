//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface USPush : NSObject
{
    id <USAnalyticsInterface> _analytics;
    id <USBillboard> _billboard;
    id <UpsightDataStoreInterface> _dataStore;
}

+ (void)didRegisterUserNotificationSettings:(id)arg1;
+ (void)extractMessageID:(id *)arg1 campaignID:(id *)arg2 userInfo:(id)arg3;
+ (void)handleRemoteNotificationWithUserInfo:(id)arg1;
+ (void)initialize;
+ (id)pushBillboard;
+ (void)registerForPushNotifications;
+ (void)registerPushToken:(id)arg1;
+ (id)sharedPushInstance;
+ (void)unregisterForPushNotifications;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <USAnalyticsInterface> analytics; // @synthesize analytics=_analytics;
@property(readonly, nonatomic) id <USBillboard> billboard; // @synthesize billboard=_billboard;
@property(retain, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
- (id)init;
- (id)initWithDataStore:(id)arg1;

@end

