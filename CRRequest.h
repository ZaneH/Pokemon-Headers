//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CRRequest : NSObject
{
    int _requestType;
    NSObject *_payload;
    NSString *_baseURL;
    NSString *_endpoint;
    NSMutableArray *_parts;
}

- (void).cxx_destruct;
- (void)addPart:(id)arg1;
@property(copy) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (id)buildJSONRequest;
- (id)buildMultipartRequest;
- (id)buildPOSTRequest;
- (id)buildURIEncodedRequest;
@property(copy) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (id)getURLRequest;
- (id)initWithBaseURL:(id)arg1 andEndPoint:(id)arg2 andRequestType:(int)arg3;
@property(retain) NSMutableArray *parts; // @synthesize parts=_parts;
@property(retain) NSObject *payload; // @synthesize payload=_payload;

@end

