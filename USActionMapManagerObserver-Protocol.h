//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class USActionMap;

@protocol USActionMapManagerObserver <NSObject>

@optional
- (void)actionMapManager:(id <USActionMapManagerInterface>)arg1 didCreateActionMap:(USActionMap *)arg2;
- (void)actionMapManager:(id <USActionMapManagerInterface>)arg1 didDestroyActionMap:(USActionMap *)arg2;
@end

