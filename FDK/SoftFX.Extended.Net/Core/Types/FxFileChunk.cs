﻿namespace SoftFX.Extended
{
    using System;

    /// <summary>
    /// Contains information about downloading file and data chunk.
    /// </summary>
    class FxFileChunk
    {
        #region Properties

        /// <summary>
        /// Gets server side file name.
        /// </summary>
        public string FileName { get; set; }

        /// <summary>
        /// Gets total chunks number of the file.
        /// </summary>
        public int ChunksNumber { get; set; }

        /// <summary>
        /// Gets size of the file in bytes.
        /// </summary>
        public int FileSize { get; set; }

        /// <summary>
        /// Gets data buffer of the current file chunk.
        /// </summary>
        public byte[] Data { get; set; }

        #endregion
    }
}