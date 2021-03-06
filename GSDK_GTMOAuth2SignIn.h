//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GSDK_GTMOAuth2Authentication, GSDK_GTMSessionFetcher, NSDictionary, NSTimer, NSURL;

@interface GSDK_GTMOAuth2SignIn : NSObject
{
    GSDK_GTMOAuth2Authentication *auth_;
    NSURL *authorizationURL_;
    NSDictionary *additionalAuthorizationParameters_;
    id delegate_;
    SEL webRequestSelector_;
    SEL finishedSelector_;
    _Bool hasHandledCallback_;
    GSDK_GTMSessionFetcher *pendingFetcher_;
    _Bool shouldFetchGoogleUserEmail_;
    _Bool shouldFetchGoogleUserProfile_;
    NSDictionary *userProfile_;
    struct __SCNetworkReachability *reachabilityRef_;
    NSTimer *networkLossTimer_;
    double networkLossTimeoutInterval_;
    _Bool hasNotifiedNetworkLoss_;
    id userData_;
}

+ (id)decodeWebSafeBase64:(id)arg1;
+ (id)googleAuthorizationURL;
+ (id)googleRevocationURL;
+ (id)googleTokenURL;
+ (id)googleUserInfoURL;
+ (id)mutableURLRequestWithURL:(id)arg1 paramString:(id)arg2;
+ (id)nativeClientRedirectURI;
+ (void)revokeTokenForGoogleAuthentication:(id)arg1;
+ (id)standardGoogleAuthenticationForScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3;
+ (id)userInfoFetcherWithAuth:(id)arg1;
- (void)addScopeForGoogleUserInfo;
@property(retain, nonatomic) NSDictionary *additionalAuthorizationParameters; // @synthesize additionalAuthorizationParameters=additionalAuthorizationParameters_;
- (void)auth:(id)arg1 finishedWithFetcher:(id)arg2 error:(id)arg3;
- (void)authCodeObtained;
@property(retain, nonatomic) GSDK_GTMOAuth2Authentication *authentication; // @synthesize authentication=auth_;
@property(retain, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=authorizationURL_;
- (void)cancelSigningIn;
- (void)closeTheWindow;
- (_Bool)cookiesChanged:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) id delegate; // @synthesize delegate=delegate_;
- (void)destroyUnreachabilityTimer;
- (void)fetchGoogleUserInfo;
- (void)finishSignInWithError:(id)arg1;
@property(nonatomic) SEL finishedSelector; // @synthesize finishedSelector=finishedSelector_;
@property _Bool hasHandledCallback; // @synthesize hasHandledCallback=hasHandledCallback_;
- (void)infoFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (id)initWithAuthentication:(id)arg1 authorizationURL:(id)arg2 delegate:(id)arg3 webRequestSelector:(SEL)arg4 finishedSelector:(SEL)arg5;
- (void)invokeFinalCallbackWithError:(id)arg1;
- (_Bool)loadFailedWithError:(id)arg1;
@property(nonatomic) double networkLossTimeoutInterval; // @synthesize networkLossTimeoutInterval=networkLossTimeoutInterval_;
- (id)parametersForWebRequest;
@property(retain) GSDK_GTMSessionFetcher *pendingFetcher; // @synthesize pendingFetcher=pendingFetcher_;
- (void)reachabilityTarget:(struct __SCNetworkReachability *)arg1 changedFlags:(unsigned int)arg2;
- (void)reachabilityTimerFired:(id)arg1;
- (_Bool)requestRedirectedToRequest:(id)arg1;
@property(nonatomic) _Bool shouldFetchGoogleUserEmail; // @synthesize shouldFetchGoogleUserEmail=shouldFetchGoogleUserEmail_;
@property(nonatomic) _Bool shouldFetchGoogleUserProfile; // @synthesize shouldFetchGoogleUserProfile=shouldFetchGoogleUserProfile_;
@property(retain, nonatomic) id userData; // @synthesize userData=userData_;
@property(retain, nonatomic) NSDictionary *userProfile; // @synthesize userProfile=userProfile_;
@property(nonatomic) SEL webRequestSelector; // @synthesize webRequestSelector=webRequestSelector_;
- (void)startReachabilityCheck;
- (_Bool)startSigningIn;
- (_Bool)startWebRequest;
- (void)stopReachabilityCheck;
- (_Bool)titleChanged:(id)arg1;
- (void)updateGoogleUserInfoWithData:(id)arg1;
- (void)windowWasClosed;

@end

