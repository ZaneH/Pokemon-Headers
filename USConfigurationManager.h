//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSTimer;

@interface USConfigurationManager : NSObject
{
    id <UpsightDataStoreInterface> _dataStore;
    id <USAnalyticsInterface> _analytics;
    NSTimer *_sendTimer;
    NSOperationQueue *_queue;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic) __weak id <USAnalyticsInterface> analytics; // @synthesize analytics=_analytics;
- (void)applyConfiguration:(id)arg1;
- (void)configurationResponseDidUpdate:(id)arg1 action:(unsigned long long)arg2;
@property(retain, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
- (void)dealloc;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithDataStore:(id)arg1 analytics:(id)arg2;
- (void)invalidateSendTimer;
- (void)loadOwnConfiguration;
- (void)ownConfigurationDidUpdate:(id)arg1 action:(unsigned long long)arg2;
- (void)processStoredConfigurationResponses;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)removeAllObjectsInDataStore:(id)arg1 withType:(id)arg2 predicate:(id)arg3;
- (void)sendConfigurationRequest;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
- (void)setup;
- (void)updateConfigurationsWithResponseObject:(id)arg1;

@end

