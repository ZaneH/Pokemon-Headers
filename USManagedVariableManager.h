//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USActionHandlerDelegate.h"
#import "USActionMapManagerObserver.h"
#import "USManagedVariableObserver.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface USManagedVariableManager : NSObject <USActionMapManagerObserver, USActionHandlerDelegate, USManagedVariableObserver>
{
    NSMutableDictionary *_tagsToManagedVariablesMap;
    NSMutableDictionary *_mapIDToTagsMap;
    NSString *_bundleHash;
    id <USManagedVariableObserverDelegate> _delegate;
    NSDictionary *_actionTypeToHandlerMap;
    NSMutableDictionary *_mapIDToSyncBool;
    id <UpsightDataStoreInterface> _dataStore;
}

+ (id)bundleHash;
+ (id)bundleID;
+ (id)managedVariableWithSchema:(id)arg1;
+ (void)setBundleID:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)UXMEnumerate;
- (void)actionMapManager:(id)arg1 didDestroyActionMap:(id)arg2;
@property(readonly, nonatomic) NSDictionary *actionTypeToHandlerMap; // @synthesize actionTypeToHandlerMap=_actionTypeToHandlerMap;
@property(retain) NSString *bundleHash; // @synthesize bundleHash=_bundleHash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
- (void)dealloc;
@property(nonatomic) __weak id <USManagedVariableObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)managedVariableWithSchema:(id)arg1;
@property(readonly) NSMutableDictionary *mapIDToSyncBool; // @synthesize mapIDToSyncBool=_mapIDToSyncBool;
@property(readonly) NSMutableDictionary *mapIDToTagsMap; // @synthesize mapIDToTagsMap=_mapIDToTagsMap;
- (id)modifyValue;
- (id)notifyUXMValuesSynchronized;
- (void)onDidChangeUXMVariable:(id)arg1 action:(unsigned long long)arg2;
- (id)setBundleID;
- (_Bool)shouldExecuteActionOfType:(id)arg1 fromMap:(id)arg2;
@property(readonly) NSMutableDictionary *tagsToManagedVariablesMap; // @synthesize tagsToManagedVariablesMap=_tagsToManagedVariablesMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

