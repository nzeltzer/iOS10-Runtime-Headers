/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStatusBarManager : NSObject <TUStatusBarManagerDelegate> {
    int  _previousStyle;
    int  _previousStyleOverrides;
    TUStatusBarManager * _statusBarManager;
    BOOL  _styleOverridesEnabled;
}

@property (nonatomic, readonly, retain) NSString *currentAbbreviatedStatusBarString;
@property (nonatomic, readonly, retain) NSString *currentStatusBarString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int previousStyle;
@property (nonatomic) int previousStyleOverrides;
@property (nonatomic, retain) TUStatusBarManager *statusBarManager;
@property (nonatomic) BOOL styleOverridesEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clearStatusBarInCallStateForStatusBarManager:(id)arg1;
- (id)currentAbbreviatedStatusBarString;
- (id)currentStatusBarString;
- (int)currentStatusBarStyleOverridesForStatusBarManager:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)previousStyle;
- (int)previousStyleOverrides;
- (void)setPreviousStyle:(int)arg1;
- (void)setPreviousStyleOverrides:(int)arg1;
- (void)setStatusBarManager:(id)arg1;
- (void)setStyleOverridesEnabled:(BOOL)arg1;
- (id)statusBarManager;
- (void)statusBarManager:(id)arg1 setDoubleHeightStatusString:(id)arg2 forStyle:(int)arg3;
- (void)statusBarManager:(id)arg1 setStyleOverrides:(int)arg2;
- (BOOL)styleOverridesEnabled;

@end