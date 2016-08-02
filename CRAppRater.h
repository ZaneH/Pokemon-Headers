//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRPreferences, CRRateAppAlert, CritterImpl;

@interface CRAppRater : NSObject
{
    unsigned long long _appLoadCount;
    CRRateAppAlert *_rateMeAlert;
    CritterImpl *_critterDelegate;
    CRPreferences *_storedState;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)appLoadedWithLaunch:(_Bool)arg1;
@property __weak CritterImpl *critterDelegate; // @synthesize critterDelegate=_critterDelegate;
- (void)handleRateMeSettings:(id)arg1;
- (void)incrementAppLoadCount;
- (id)initWithStoredState:(id)arg1 andCritterDelegate:(id)arg2;
- (void)openAppStore;
- (void)persistItunesIdIfPresent:(id)arg1;
@property(retain) CRRateAppAlert *rateMeAlert; // @synthesize rateMeAlert=_rateMeAlert;
- (void)resetRateMeSettings;
@property(retain) CRPreferences *storedState; // @synthesize storedState=_storedState;
- (_Bool)shouldDisplayRateMeAlertWithDict:(id)arg1;
- (_Bool)shouldResetRateMeSettings;

@end
