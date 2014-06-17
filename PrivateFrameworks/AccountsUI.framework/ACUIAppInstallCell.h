/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class UILabel, UIImageView, SKUIItemOfferButton;

@interface ACUIAppInstallCell : PSTableCell  {
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    UIImageView *_iconView;
    SKUIItemOfferButton *_installButton;
    int _installState;
}

@property int installState;

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;

- (void)_updateInstallButtonWithState:(int)arg1;
- (void)_updateSubviewsWithInstallState:(int)arg1;
- (id)_createInstallButton;
- (id)_createLabelForPublisher:(id)arg1;
- (id)_createLabelForAppName:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (int)installState;
- (void)setInstallState:(int)arg1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end