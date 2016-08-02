//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableURLRequest, NSThread;

@interface GSDK_GTMOAuth2AuthorizationArgs : NSObject
{
    NSMutableURLRequest *request_;
    id delegate_;
    SEL sel_;
    id completionHandler_;
    NSThread *thread_;
    NSError *error_;
}

+ (id)argsWithRequest:(id)arg1 delegate:(id)arg2 selector:(SEL)arg3 completionHandler:(id)arg4 thread:(id)arg5;
@property(copy) id completionHandler; // @synthesize completionHandler=completionHandler_;
- (void)dealloc;
@property(retain) id delegate; // @synthesize delegate=delegate_;
@property(retain) NSError *error; // @synthesize error=error_;
@property(retain) NSMutableURLRequest *request; // @synthesize request=request_;
@property SEL selector; // @synthesize selector=sel_;
@property(retain) NSThread *thread; // @synthesize thread=thread_;

@end
