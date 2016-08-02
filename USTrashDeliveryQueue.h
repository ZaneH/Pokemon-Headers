//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USDeliveryQueueInterface.h"

@class NSOperationQueue, NSString, USQueueConfiguration;

@interface USTrashDeliveryQueue : NSObject <USDeliveryQueueInterface>
{
    id <USDeliveryQueueDelegate> _delegate;
    USQueueConfiguration *_queueConfiguration;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <USDeliveryQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drain;
- (void)enqueuePacket:(id)arg1;
- (id)init;
- (id)initWithQueueConfiguration:(id)arg1 operationQueue:(id)arg2;
@property(readonly, nonatomic) NSString *name;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) USQueueConfiguration *queueConfiguration; // @synthesize queueConfiguration=_queueConfiguration;

@end

