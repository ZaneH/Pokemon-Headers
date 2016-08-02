//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USActionMapManagerObserver.h"
#import "USBillboardManager.h"
#import "USContentUnitBillboardDataSource.h"
#import "USContentUnitViewControllerCacheDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, USContentUnitViewControllerCache, USURLLoader;

@interface USContentUnitBillboardManager : NSObject <USContentUnitViewControllerCacheDelegate, USActionMapManagerObserver, USContentUnitBillboardDataSource, USBillboardManager>
{
    NSDictionary *_actionTypeToHandlerMap;
    USContentUnitViewControllerCache *_controllersCache;
    USURLLoader *_URLLoader;
    id <UpsightDataStoreInterface> _dataStore;
    NSMutableDictionary *_scopeToBillboardMap;
    NSMutableArray *_presentScopedContentRecords;
    NSMutableDictionary *_triggerIfContentAvailableTasks;
    id <USActionMapManagerInterface> _actionMapManager;
}

- (void).cxx_destruct;
@property(readonly) USURLLoader *URLLoader; // @synthesize URLLoader=_URLLoader;
@property(readonly, nonatomic) id <USActionMapManagerInterface> actionMapManager; // @synthesize actionMapManager=_actionMapManager;
- (void)actionMapManager:(id)arg1 didDestroyActionMap:(id)arg2;
@property(readonly, nonatomic) NSDictionary *actionTypeToHandlerMap; // @synthesize actionTypeToHandlerMap=_actionTypeToHandlerMap;
- (id)associateOnce;
- (id)billboardForScope:(id)arg1;
- (id)buildContent;
- (void)cache:(id)arg1 didAddController:(id)arg2;
@property(retain, nonatomic) USContentUnitViewControllerCache *controllersCache; // @synthesize controllersCache=_controllersCache;
@property(readonly, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
- (void)dealloc;
- (id)findBillboardForActionMap:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1 actionMapManager:(id)arg2;
- (_Bool)isContentAvailableForBillboard:(id)arg1;
- (id)notifyPurchases;
- (id)notifyRewards;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)openInAppStore;
- (id)openURL;
- (id)presentCloseButton;
- (id)presentScopedContent;
@property(retain, nonatomic) NSMutableArray *presentScopedContentRecords; // @synthesize presentScopedContentRecords=_presentScopedContentRecords;
- (id)presentScopelessContent;
- (_Bool)presentViewController:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *scopeToBillboardMap; // @synthesize scopeToBillboardMap=_scopeToBillboardMap;
- (id)sendEvent;
- (id)sendFormData;
@property(retain, nonatomic) NSMutableDictionary *triggerIfContentAvailableTasks; // @synthesize triggerIfContentAvailableTasks=_triggerIfContentAvailableTasks;
- (id)triggerActions;
- (id)triggerIfContentAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

