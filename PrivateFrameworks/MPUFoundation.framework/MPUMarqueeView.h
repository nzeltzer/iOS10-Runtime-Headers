/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMarqueeView : UIView {
    float  _contentGap;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    UIView * _contentView;
    NSUUID * _currentAnimationID;
    <MPUMarqueeViewDelegate> * _delegate;
    long long  _lastEnableOptions;
    double  _marqueeDelay;
    BOOL  _marqueeEnabled;
    double  _marqueeScrollRate;
}

@property (nonatomic) float contentGap;
@property (nonatomic) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) <MPUMarqueeViewDelegate> *delegate;
@property (nonatomic) double marqueeDelay;
@property (getter=isMarqueeEnabled, nonatomic) BOOL marqueeEnabled;
@property (nonatomic) double marqueeScrollRate;

- (void).cxx_destruct;
- (void)_createMarqueeAnimationIfNeededWithOptions:(long long)arg1;
- (void)_tearDownMarqueeAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (float)contentGap;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)contentView;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isMarqueeEnabled;
- (void)layoutSubviews;
- (double)marqueeDelay;
- (double)marqueeScrollRate;
- (void)resetMarqueePosition;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentGap:(float)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMarqueeDelay:(double)arg1;
- (void)setMarqueeEnabled:(BOOL)arg1;
- (void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2;
- (void)setMarqueeScrollRate:(double)arg1;

@end