//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_GTMOAuth2SignIn.h"

@class NSString;

@interface GSDK_GTMOAuth2SignInInternal : GSDK_GTMOAuth2SignIn
{
    NSString *authorizationEmail_;
    NSString *authorizationTemplate_;
    _Bool shouldUseLoginScope_;
}

+ (id)accountsHost;
+ (id)authorizationHost;
+ (id)defaultSourceString;
+ (id)dictionaryWithClientLoginResponseString:(id)arg1;
+ (void)fetchAuthTokenWithValues:(id)arg1 service:(id)arg2 isSessionOnly:(_Bool)arg3 completionHandler:(id)arg4;
+ (void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(id)arg4;
+ (void)fetchClientLoginValuesWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 doUberAuthFetch:(_Bool)arg4 parseBlock:(id)arg5 completionHandler:(id)arg6;
+ (void)fetchTokenAuthURLWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(id)arg5;
+ (void)fetchTokenAuthURLWithValues:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4 completionHandler:(id)arg5;
+ (void)fetchUberAuthTokenWithAuth:(id)arg1 service:(id)arg2 source:(id)arg3 completionHandler:(id)arg4;
+ (id)googleAuthorizationURL;
+ (id)googleRevocationURL;
+ (id)googleTokenURL;
+ (id)googleUserInfoURL;
+ (id)nativeClientRedirectURI;
+ (void)setAccountsHost:(id)arg1;
+ (void)setAuthorizationHost:(id)arg1;
+ (void)setUserInfoHost:(id)arg1;
+ (id)tokenAuthURLWithAuthToken:(id)arg1 service:(id)arg2 source:(id)arg3 URLString:(id)arg4;
+ (id)userInfoHost;
@property(retain, nonatomic) NSString *authorizationEmail; // @synthesize authorizationEmail=authorizationEmail_;
@property(retain, nonatomic) NSString *authorizationTemplate; // @synthesize authorizationTemplate=authorizationTemplate_;
- (_Bool)cookiesChanged:(id)arg1;
- (void)dealloc;
- (id)parametersForWebRequest;
@property(nonatomic) _Bool shouldUseLoginScope; // @synthesize shouldUseLoginScope=shouldUseLoginScope_;
- (_Bool)startSigningIn;
- (_Bool)titleChanged:(id)arg1;

@end

