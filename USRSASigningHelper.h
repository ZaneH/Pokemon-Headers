//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface USRSASigningHelper : NSObject
{
    struct __SecKey *_publicKeyReference;
    struct __SecKey *_privateKeyReference;
    NSString *_publicKey;
    NSString *_privateKey;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPublicKey:(id)arg1 privateKey:(id)arg2;
- (struct __SecKey *)keychainItemWithKey:(id)arg1 keyType:(void *)arg2 withTag:(id)arg3;
@property(retain, nonatomic) NSString *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly) struct __SecKey *privateKeyReference; // @synthesize privateKeyReference=_privateKeyReference;
@property(retain, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly) struct __SecKey *publicKeyReference; // @synthesize publicKeyReference=_publicKeyReference;
- (id)signatureForMessage:(id)arg1;
- (id)stripPublicKeyHeader:(id)arg1;
- (_Bool)verifySignature:(id)arg1 forMessage:(id)arg2;

@end

