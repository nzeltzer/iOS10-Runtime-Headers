/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}


- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (BOOL)isEncrypted;
- (void)dealloc;
- (id)path;
- (id)initWithPath:(id)arg1;

@end