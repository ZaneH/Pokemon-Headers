//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class CRNetStatDispatch, NSURLSession;

@interface CRNSURLSessionProxy : NSProxy
{
    NSURLSession *_session;
    CRNetStatDispatch *_dispatch;
}

+ (void)instrumentNSURLSessionWithDispatch:(id)arg1;
+ (_Bool)isInstrumented;
+ (void)uninstrumentNSURLSession;
- (void).cxx_destruct;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id)arg2;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) CRNetStatDispatch *dispatch; // @synthesize dispatch=_dispatch;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSession:(id)arg1 dispatch:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;

@end

