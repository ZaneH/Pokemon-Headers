//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface USEventBatch : NSObject
{
    NSMutableArray *_itemsArray;
    unsigned long long _batchSize;
}

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)addEventsFromArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
- (id)dictionaryRepresentationWithBatchParameters:(id)arg1;
- (id)initWithBatchSize:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isFull) _Bool full;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;

@end

