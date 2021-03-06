//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableURLRequest, NSString, NSURLRequest;

@protocol GTMFetcherAuthorizationProtocol <NSObject>
- (void)authorizeRequest:(NSMutableURLRequest *)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
- (_Bool)isAuthorizedRequest:(NSURLRequest *)arg1;
- (_Bool)isAuthorizingRequest:(NSURLRequest *)arg1;
- (void)stopAuthorization;
- (void)stopAuthorizationForRequest:(NSURLRequest *)arg1;
@property(readonly) NSString *userEmail;

@optional
- (void)authorizeRequest:(NSMutableURLRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
@property(readonly) _Bool canAuthorize;
@property __weak id <GTMSessionFetcherServiceProtocol> fetcherService;
- (_Bool)primeForRefresh;
@property _Bool shouldAuthorizeAllRequests;
@end

