//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UIView, UIWebView, USActionMap, USContentUnit;

@interface USContentUnitViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    UIView *_contentUnitView;
    UIButton *_closeButton;
    NSMutableDictionary *_viewData;
    double _loadingTimeout;
    double _timestamp;
    USContentUnit *_contentUnit;
    USActionMap *_actionMap;
    NSArray *_scopes;
    id <USContentUnitViewControllerDelegate> _delegate;
    id _completionHandler;
}

- (void).cxx_destruct;
- (id)JSONStringWithObject:(id)arg1;
@property(retain, nonatomic) USActionMap *actionMap; // @synthesize actionMap=_actionMap;
- (void)adjustContentUnitToContainerSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) USContentUnit *contentUnit; // @synthesize contentUnit=_contentUnit;
@property(readonly, nonatomic) UIView *contentUnitView; // @synthesize contentUnitView=_contentUnitView;
- (void)dealloc;
@property __weak id <USContentUnitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissController:(id)arg1;
- (void)dismissControllerAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)failWithError:(id)arg1;
- (void)handleDispatchURL:(id)arg1;
- (void)handleLoadContextWithCallback:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadContentUnit:(id)arg1 actionMap:(id)arg2 completionBlock:(id)arg3;
@property(readonly, nonatomic) double loadingTimeout; // @synthesize loadingTimeout=_loadingTimeout;
- (_Bool)prefersStatusBarHidden;
- (void)presentCloseButtonWithDelay:(double)arg1;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
- (_Bool)sendCallback:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)setViewData:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)updateViewDataWithDispatchContext:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *viewData; // @synthesize viewData=_viewData;
- (id)viewDataForKey:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
