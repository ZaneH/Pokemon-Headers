//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CRPart.h"

@class NSData;

@interface CRDataPart : CRPart
{
    NSData *_partData;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andFilename:(id)arg2 andData:(id)arg3;
@property(retain) NSData *partData; // @synthesize partData=_partData;
- (void)serializeTo:(id)arg1;

@end

