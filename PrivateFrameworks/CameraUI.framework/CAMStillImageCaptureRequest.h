/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMBurstIdentifierProvider, CAMBurstRequest, CAMEffectFilterTypeProvider, CAMHDRRequest, NSCopying, NSMutableCopying> {
    NSString * _HDREV0PersistenceUUID;
    NSString * _burstIdentifier;
    <CAMStillImageCaptureRequestDelegate> * _delegate;
    int  _effectFilterType;
    int  _flashMode;
    int  _hdrMode;
    unsigned int  _maximumBurstLength;
    BOOL  _usesStillImageStabilization;
    BOOL  _wantsAudioForCapture;
    BOOL  _wantsHighResolutionStills;
    BOOL  _wantsSquareCrop;
}

@property (nonatomic, readonly, copy) NSString *HDREV0PersistenceUUID;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int effectFilterType;
@property (nonatomic, readonly) int flashMode;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int hdrMode;
@property (nonatomic, readonly) unsigned int maximumBurstLength;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL usesStillImageStabilization;
@property (nonatomic, readonly) BOOL wantsAudioForCapture;
@property (nonatomic, readonly) BOOL wantsHighResolutionStills;
@property (nonatomic, readonly) BOOL wantsSquareCrop;

- (void).cxx_destruct;
- (id)HDREV0PersistenceUUID;
- (id)burstIdentifier;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (int)effectFilterType;
- (int)flashMode;
- (int)hdrMode;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (unsigned int)maximumBurstLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)usesStillImageStabilization;
- (BOOL)wantsAudioForCapture;
- (BOOL)wantsHighResolutionStills;
- (BOOL)wantsSquareCrop;

@end