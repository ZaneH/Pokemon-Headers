//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIWebView;

@interface GIDSignInWebView : UIView <UIWebViewDelegate>
{
    id <GIDSignInWebViewDelegate> _delegate;
    UIWebView *_webView;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (id)createSpinner;
- (id)createWebView;
@property(nonatomic) __weak id <GIDSignInWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializeSubviews;
- (void)layoutSubviews;
- (void)loadRequest:(id)arg1;
@property(nonatomic) __weak UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

