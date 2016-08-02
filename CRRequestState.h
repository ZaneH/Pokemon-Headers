//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CRRequestState : NSObject
{
    double _timestamp;
    NSString *_url;
    NSString *_method;
    NSString *_errorString;
    long long _activeNetwork;
    double _latency;
    long long _errorType;
    long long _responseCode;
    unsigned long long _bytesSent;
    unsigned long long _bytesRead;
    double _latitude;
    double _longitude;
    NSString *_MIMEType;
}

+ (long long)connectionErrorType:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(nonatomic) long long activeNetwork; // @synthesize activeNetwork=_activeNetwork;
@property(nonatomic) unsigned long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property(nonatomic) unsigned long long bytesSent; // @synthesize bytesSent=_bytesSent;
- (void)connectionFailedWithError:(id)arg1;
@property(copy, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (void)initialResponseReceivedAt:(double)arg1;
- (id)jsonArray;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (id)makeArrayUsingDefault:(id)arg1;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
- (void)onReceivedData:(unsigned long long)arg1;
- (id)plistSafeArray;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
- (void)sentRequestAt:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setResponseCodeForResponse:(id)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end
