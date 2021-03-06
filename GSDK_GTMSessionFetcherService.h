//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTMSessionFetcherServiceProtocol.h"

@class GSDK_GTMSessionFetcherSessionDelegateDispatcher, NSArray, NSDate, NSDictionary, NSHTTPCookieStorage, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLCredential, NSURLSessionConfiguration;

@interface GSDK_GTMSessionFetcherService : NSObject <GTMSessionFetcherServiceProtocol>
{
    NSMutableDictionary *_delayedFetchersByHost;
    NSMutableDictionary *_runningFetchersByHost;
    unsigned long long _maxRunningFetchersPerHost;
    GSDK_GTMSessionFetcherSessionDelegateDispatcher *_delegateDispatcher;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_delegateQueue;
    NSHTTPCookieStorage *_cookieStorage;
    NSString *_userAgent;
    double _timeout;
    NSURLCredential *_credential;
    NSURLCredential *_proxyCredential;
    long long _cookieStorageMethod;
    id <GTMFetcherAuthorizationProtocol> _authorizer;
    NSMutableArray *_stoppedFetchersToWaitFor;
    NSDate *_stoppedAllFetchersDate;
    _Bool _allowLocalhostRequest;
    _Bool _allowInvalidServerCertificates;
    _Bool _retryEnabled;
    NSURLSessionConfiguration *_configuration;
    id _configurationBlock;
    NSArray *_allowedInsecureSchemes;
    id _retryBlock;
    double _maxRetryInterval;
    double _minRetryInterval;
    NSDictionary *_properties;
    double _unusedSessionTimeout;
    id _testBlock;
}

+ (unsigned long long)numberOfNonBackgroundSessionFetchers:(id)arg1;
- (void).cxx_destruct;
- (void)abandonDispatcher;
- (void)addDelayedFetcher:(id)arg1 forHost:(id)arg2;
- (void)addRunningFetcher:(id)arg1 forHost:(id)arg2;
@property _Bool allowInvalidServerCertificates; // @synthesize allowInvalidServerCertificates=_allowInvalidServerCertificates;
@property _Bool allowLocalhostRequest; // @synthesize allowLocalhostRequest=_allowLocalhostRequest;
@property(copy) NSArray *allowedInsecureSchemes; // @synthesize allowedInsecureSchemes=_allowedInsecureSchemes;
@property(retain) id <GTMFetcherAuthorizationProtocol> authorizer;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy) id configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(retain) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
- (void)dealloc;
@property(retain) NSDictionary *delayedFetchersByHost;
- (id)delegateDispatcherForFetcher:(id)arg1;
@property(readonly) NSOperationQueue *delegateQueue;
- (void)detachAuthorizer;
- (void)fetcherDidBeginFetching:(id)arg1;
- (void)fetcherDidCreateSession:(id)arg1;
- (void)fetcherDidStop:(id)arg1;
- (_Bool)fetcherShouldBeginFetching:(id)arg1;
- (id)fetcherWithRequest:(id)arg1;
- (id)fetcherWithRequest:(id)arg1 fetcherClass:(Class)arg2;
- (id)fetcherWithURL:(id)arg1;
- (id)fetcherWithURLString:(id)arg1;
- (id)init;
- (_Bool)isDelayingFetcher:(id)arg1;
@property(getter=isRetryEnabled) _Bool retryEnabled; // @synthesize retryEnabled=_retryEnabled;
- (id)issuedFetchers;
- (id)issuedFetchersWithRequestURL:(id)arg1;
@property double maxRetryInterval; // @synthesize maxRetryInterval=_maxRetryInterval;
@property unsigned long long maxRunningFetchersPerHost; // @synthesize maxRunningFetchersPerHost=_maxRunningFetchersPerHost;
@property double minRetryInterval; // @synthesize minRetryInterval=_minRetryInterval;
- (unsigned long long)numberOfDelayedFetchers;
- (unsigned long long)numberOfFetchers;
- (unsigned long long)numberOfRunningFetchers;
@property(copy) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain) NSURLCredential *proxyCredential; // @synthesize proxyCredential=_proxyCredential;
- (void)resetSession;
@property(copy) id retryBlock; // @synthesize retryBlock=_retryBlock;
@property _Bool reuseSession;
@property(retain) NSDictionary *runningFetchersByHost;
- (id)session;
- (id)sessionDelegate;
@property(retain) NSOperationQueue *sessionDelegateQueue; // @synthesize sessionDelegateQueue=_delegateQueue;
- (id)sessionForFetcherCreation;
@property(copy) id testBlock; // @synthesize testBlock=_testBlock;
@property double unusedSessionTimeout; // @synthesize unusedSessionTimeout=_unusedSessionTimeout;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void)startFetcher:(id)arg1;
- (void)stopAllFetchers;
- (void)stopFetcher:(id)arg1;
- (id)stoppedAllFetchersDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

