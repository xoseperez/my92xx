# DebounceEvent change log

The format is based on [Keep a Changelog](http://keepachangelog.com/)
and this project adheres to [Semantic Versioning](http://semver.org/).

## [3.0.0] 2017-11-13
### Changed
- Class name changed from my9291 to my92xx, that's why there is a new repo
- Complete change in the API (setColor disappears, use setChannel and update to refresh)
- Builtin support for dais chained devices
- Out of the box supports MY9291 (4 channels) and MY9231 (3 channels)

### Fixed
- Fix initialization for daisy chained devices

## [2.0.0] 2017-08-26
### Added
- Support for 5 channels bulbs

### Changed
- Color has now 5 components, check examples

## [1.0.1] 2017-02-26
### Added
- Support for AVR architecture (untested)

## [1.0.0] 2017-02-25
- Initial version of the library
