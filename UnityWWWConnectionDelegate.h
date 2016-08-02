//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSCondition, NSData, NSMutableURLRequest, NSString, NSURL, NSURLConnection;

@interface UnityWWWConnectionDelegate : NSObject <NSURLConnectionDataDelegate>
{
    void *_udata;
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    NSURL *_url;
    NSString *_user;
    NSString *_password;
    NSString *_responseHeader;
    long long _status;
    unsigned long long _estimatedLength;
    unsigned long long _dataRecievd;
    int _retryCount;
    _Bool shouldAbort;
    _Bool _manuallyHandleRedirect;
    NSData *_data;
    NSCondition *_condition;
}

+ (id)newDelegateWithCStringURL:(const char *)arg1 udata:(void *)arg2;
+ (id)newDelegateWithURL:(id)arg1 udata:(void *)arg2;
+ (id)newRequestForHTTPMethod:(id)arg1 url:(id)arg2 headers:(id)arg3;
- (void).cxx_destruct;
- (void)cleanup;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (_Bool)connection:(id)arg1 handleAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)extractUserPassFromUrl:(id)arg1;
- (void)handleResponse:(id)arg1;
- (id)initWithURL:(id)arg1 udata:(void *)arg2;
@property(nonatomic) _Bool manuallyHandleRedirect; // @synthesize manuallyHandleRedirect=_manuallyHandleRedirect;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool shouldAbort; // @synthesize shouldAbort;
@property(nonatomic) void *udata; // @synthesize udata=_udata;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

