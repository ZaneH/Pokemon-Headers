//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSMutableArray, NSString;

@interface GIDAuthentication : NSObject <NSCoding>
{
    NSMutableArray *_authenticationHandlerQueue;
    NSString *_clientID;
    NSString *_accessToken;
    NSDate *_accessTokenExpirationDate;
    NSString *_refreshToken;
    NSString *_idToken;
    NSDate *_idTokenExpirationDate;
}

+ (id)authenticationHandlerWithAccessTokenHandler:(id)arg1;
+ (id)dateWithNumber:(id)arg1;
+ (id)decodedIdTokenFromString:(id)arg1;
- (void).cxx_destruct;
- (id)GTMAuth;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) NSDate *accessTokenExpirationDate; // @synthesize accessTokenExpirationDate=_accessTokenExpirationDate;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void)encodeWithCoder:(id)arg1;
- (id)fetcherAuthorizer;
- (void)getAccessTokenWithHandler:(id)arg1;
- (void)getTokensWithHandler:(id)arg1;
@property(readonly, nonatomic) NSString *idToken; // @synthesize idToken=_idToken;
@property(readonly, nonatomic) NSDate *idTokenExpirationDate; // @synthesize idTokenExpirationDate=_idTokenExpirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithGTMAuth:(id)arg1;
- (void)refreshAccessTokenWithHandler:(id)arg1;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
- (void)refreshTokensWithHandler:(id)arg1;

@end

