//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GIDTokenFetchDelegate : NSObject
{
    id _handler;
}

+ (id)beginTokenFetchWithAuth:(id)arg1 handler:(id)arg2;
- (void).cxx_destruct;
- (void)didFinishTokenFetchWithAuth:(id)arg1 fetcher:(id)arg2 error:(id)arg3;
- (id)initWithHandler:(id)arg1;

@end
