//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIDSignInDelegate.h"
#import "GIDSignInUIDelegate.h"

@class GIDGoogleUser, GIDSignIn, NSString;

@interface NIAIosAuthenticationManager : NSObject <GIDSignInDelegate, GIDSignInUIDelegate>
{
    id _loginCompletionHandler;
    id _logoutCompletionHandler;
    GIDGoogleUser *_signedInUser;
    _Bool _loginWithUI;
    _Bool _loginFinished;
    GIDSignIn *_signIn;
}

- (void).cxx_destruct;
- (id)accessToken;
- (id)authentication;
- (void)clearAuth:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)getAccountOrLogin:(id)arg1 completion:(id)arg2;
- (id)init;
- (void)reauthorizeUser:(id)arg1;
- (void)refreshIdTokenWithCompletion:(id)arg1;
- (void)signIn:(id)arg1 didDisconnectWithUser:(id)arg2 withError:(id)arg3;
- (void)signIn:(id)arg1 didSignInForUser:(id)arg2 withError:(id)arg3;
- (void)signIn:(id)arg1 dismissViewController:(id)arg2;
- (void)signIn:(id)arg1 presentViewController:(id)arg2;
- (id)userEmail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

