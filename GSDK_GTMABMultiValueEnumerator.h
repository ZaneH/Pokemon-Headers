//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class GSDK_GTMABMultiValue;

@interface GSDK_GTMABMultiValueEnumerator : NSEnumerator
{
    void *ref_;
    GSDK_GTMABMultiValue *enumeree_;
    unsigned long long mutations_;
    unsigned long long count_;
    unsigned long long index_;
    _Bool useLabels_;
}

+ (id)labelEnumeratorFor:(id)arg1;
+ (id)valueEnumeratorFor:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithEnumeree:(id)arg1 useLabels:(_Bool)arg2;
- (id)nextObject;

@end

