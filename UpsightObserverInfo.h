//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSPredicate, NSString;

@interface UpsightObserverInfo : NSObject
{
    NSString *_selector;
    NSObject *_observer;
    NSOperationQueue *_queue;
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *selector; // @synthesize selector=_selector;

@end

