//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PurchasableItemDetails : NSObject
{
    NSString *_itemId;
    NSString *_title;
    NSString *_itemDescription;
    NSString *_price;
}

- (void).cxx_destruct;
- (id)init:(id)arg1 title:(id)arg2 description:(id)arg3 price:(id)arg4;
@property(readonly) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly) NSString *price; // @synthesize price=_price;
@property(readonly) NSString *title; // @synthesize title=_title;

@end

