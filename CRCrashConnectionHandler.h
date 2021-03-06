//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CRConnectionHandler.h"

@class CRCrashArchive, NSString;

@interface CRCrashConnectionHandler : CRConnectionHandler
{
    NSString *_path;
    CRCrashArchive *_crashArchive;
}

- (void).cxx_destruct;
@property(retain) CRCrashArchive *crashArchive; // @synthesize crashArchive=_crashArchive;
- (void)handleError:(id)arg1;
- (void)handleResponse:(long long)arg1 andData:(id)arg2;
- (id)initWithCritterDelegate:(id)arg1 andCrashArchive:(id)arg2 andReportPath:(id)arg3;
@property(retain) NSString *path; // @synthesize path=_path;

@end

