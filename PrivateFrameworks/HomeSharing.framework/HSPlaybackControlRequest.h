/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlaybackControlRequest : HSRequest  {
    int _controlCommand;
    unsigned int _interfaceID;
}

@property(readonly) int controlCommand;
@property(readonly) unsigned int interfaceID;


- (int)controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(int)arg2;
- (unsigned int)interfaceID;

@end