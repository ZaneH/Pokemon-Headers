//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PlayerWrapper : NSObject
{
}

+ (void)loadFriends;
+ (void)loadUserIds:(id)arg1 withCondition:(_Bool)arg2;
+ (void)loadUserPhotoAsyncAndTriggerCallbackWhenNeeded:(id)arg1 withCondition:(_Bool)arg2 index:(int)arg3 totalSize:(int)arg4;
+ (void)processNonFriendUsersUsingNewAPI:(id)arg1 withFriends:(id)arg2;
+ (void)processUsers:(id)arg1 withCondition:(_Bool)arg2 friendCallback:(id)arg3;

@end

